#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class Server : public QObject
{
    Q_OBJECT
public:
    Server();
    Server(int port);

    bool start(); // Start server;
    void stop(); // Stop server;
    int port(); // Get current server port;
    void setPort(int portNumber); // Set current server port;

private:
    QTcpServer *ob_server_main; // The main server;
    int PORT;
    bool createObjects(); // Instanting objects;
    void configureObjects(); // ....
private slots:
    void newConnection();
signals:
    void newClient(QTcpSocket*);
    void error(QString); //
};

#endif // SERVER_H
