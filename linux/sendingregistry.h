#ifndef SENDINGREGISTRY_H
#define SENDINGREGISTRY_H

#include "include.h"

class Drone;
class SendingInterface;
struct SendingData;

class SendingRegistry : public QObject {
    Q_OBJECT
public:
    SendingRegistry(Drone * drone);
    void add(SendingInterface * handler);
    void start();
private:
    QList<SendingInterface *> registry;
    Drone * drone;
    QHash<QString, SendingData *> * sendingsData;
signals:
    void signalSendingDataChanged(SendingData *);
    void signalSendingsDataChanged(QHash<QString, SendingData *> *);
public slots:
    void slotSendingDataChanged(SendingData*);
};

#endif // STEERINGREGISTRY_H
