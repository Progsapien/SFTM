#ifndef CONNECTIONSMANAGER_H
#define CONNECTIONSMANAGER_H


#include <QObject>
#include "server.h"
#include <QList>

class ConnectionsManager: public QObject
{
    Q_OBJECT
public:
    ConnectionsManager();
    QList<QTcpSocket*> getClients();
    bool removeClient();

private:

    Server *ob_server_main;
    QList<QTcpSocket*> ob_list_clients;
    bool createObjects();
    void configureObjects();

    void addClient(QTcpSocket*);

signals:
    void error(QString);
};

#endif // CONNECTIONSMANAGER_H
