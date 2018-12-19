#include "include.h"

using namespace std::experimental::filesystem::v1;

Database::Database() {
    this->path = Path(QString(QString(getenv("HOME")) + QString("/.drone/")).toStdString());
    this->databasePath = this->path += "database/database/";

    Path path = this->path;

    if (!exists(path)) {
        create_directory(path);

        path += "database/";
        create_directory(path);

        path += "database/";
        create_directory(path);
    }
}

RecordsList Database::getAll() {
    RecordsList result;
    Path path = this->databasePath;

    for (const directory_entry & entry: directory_iterator(path)) {
        result.push_back(QString(entry.path().filename().c_str()));
    }

    return result;
}

void Database::remove(QString name) {
    Path path = this->databasePath;
    path += name.toStdString();

    std::experimental::filesystem::v1::remove(path);
}

QString Database::create() {
    Path path = this->databasePath;
    path += "New";

    if (exists(path)) {
        int i = 2;
        while (true) {
            Path newPath(path);
            newPath += " ";
            newPath += QString::number(i).toStdString().c_str();

            if (!exists(newPath)) {
                this->createFile(newPath);
                return this->setActive(newPath);
            }

            i++;
        }
    } else {
        this->createFile(path);
        return this->setActive(path);
    }
}

void Database::move(QString oldName, QString newName) {
    Path oldPath = this->databasePath;
    oldPath += oldName.toStdString();

    Path newPath = this->databasePath;
    newPath += newName.toStdString();

    rename(oldPath, newPath);
}

void Database::createFile(Path path) {
    OutputStream file;
    file.open(path.c_str());
    file.write("", 0);
    file.close();
}

QString Database::setActive(Path path) {
    this->activeHandle.open(QString(path.c_str()).toStdString());
    this->active = QString(path.c_str());

    emit recordingStart(QString(path.filename().c_str()));

    return this->active;
}

void Database::setActivePlay(QString name) {
    if (name.length() > 0) {
        this->activePath = Path(this->databasePath);
        this->activePath += name.toStdString().c_str();
    }
}

void Database::record(QString leftX, QString leftY, QString rightX, QString rightY) {
    this->activeHandle << leftX.toStdString() << ' ' << leftY.toStdString() << ' ' << rightX.toStdString() << ' ' << rightY.toStdString() << '\n';
}

void Database::closeRecord() {
    if (this->activeHandle.is_open()) {
        this->activeHandle.close();
    }
}

QString Database::getActiveFileName() {
    if (!this->activePath.has_filename()) {
        return QString("");
    }
    return QString(this->activePath.filename().c_str());
}


void Database::openPlay() {
    this->playFrames.clear();

    InputStream buffer(this->activePath.c_str());
    T_STR line;

    while (std::getline(buffer, line)) {
        PlayFrame playFrame;
        StringStream partBuffer(line);
        T_STR part;
        int j = 0;
        while (std::getline(partBuffer, part, ' ')) {
            T_STR key;

            switch(j) {
            case 0:
                key = "leftX";
                break;

            case 1:
                key = "leftY";
                break;

            case 2:
                key = "rightX";
                break;

            case 3:
                key = "rightY";
                break;
            }

            playFrame[QString(key.c_str())] = QString(part.c_str());
            j++;
        }

        this->playFrames.push_back(playFrame);
    }

    this->currrentPlay = -1;
}

size_t Database::getCurrentPlay() {
    this->currrentPlay += 1; // get next frame (starting from -1)

    if (this->playFrames.size() == 0) {
        return -1; // can't play
    }

    if (this->currrentPlay > this->playFrames.size() - 1) { // out of range
        this->currrentPlay = -1; // reset and can play again
        return -1; // can't play
    }

    return this->currrentPlay;
}

PlayFrame Database::getFrame(size_t frame) {
    return this->playFrames.at(frame);
}
