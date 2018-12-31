#ifndef STORAGE_H
#define STORAGE_H

class Storage
{
    public:
        static Storage& getInstance() {
            static Storage instance;
            return instance;
        }
        void create() {
            std::experimental::filesystem::path path = this->path;

            if (!exists(path)) {
                create_directory(path);
            }

            path += "config.json";

            if (!exists(path)) {
                nlohmann::json result;

                result["radio"]["middle"] = 1500;
                result["radio"]["min"] = 1100;
                result["radio"]["max"] = 1900;

                std::ofstream out(path);
                out << result.dump();
                out.close();
            }
        }
        Storage * open() {
            if (!this->isOpened) {
                std::experimental::filesystem::path path = this->path;
                path += "config.json";

                if (exists(path)) {
                    std::ifstream ifs(path);
                    this->data = nlohmann::json::parse(ifs);

                    this->isOpened = true;
                }

                return this;
            }
        }
        nlohmann::json getData() {
            return this->data;
        }
    private:
        Storage() {
            this->path = std::experimental::filesystem::path(QString(QString(getenv("HOME")) + QString("/.drone/")).toStdString());
        }
        Storage(Storage const&);
        void operator=(Storage const&);
        nlohmann::json data;
        std::experimental::filesystem::path path;
        bool isOpened = false;
};

#endif // STORAGE_H
