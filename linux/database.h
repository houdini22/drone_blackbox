#ifndef DATABASE_H
#define DATABASE_H

#include "include.h"

typedef std::vector<QString> RecordsList;
typedef QMap<QString, QString> PlayFrame;
typedef std::vector<PlayFrame> PlayFrames;
typedef std::experimental::filesystem::path Path;
typedef std::ofstream OutputStream;
typedef std::ifstream InputStream;
typedef std::stringstream StringStream;

class Database : public QObject {
    Q_OBJECT
public:
    Database();
    RecordsList getAll();
    void remove(QString name);
    QString create();
    void move(QString oldName, QString newName);
    void record(QString leftX, QString leftY, QString rightX, QString rightY);
    void closeRecord();
    void setActivePlay(QString name);
    void openPlay();
    QString getActiveFileName();
    size_t getCurrentPlay();
    PlayFrame getFrame(size_t frame);
private:
    QString setActive(Path active);
    void createFile(Path path);
    Path path;
    Path activePath;
    Path databasePath;
    QString active;
    OutputStream activeHandle;
    size_t currrentPlay = 0;
    PlayFrames playFrames;
signals:
    void recordingStart(QString active);
};

#endif // DATABASE_H
