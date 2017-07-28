#include "server.h"

Server::Server()
{
    PORT = 0;

    if(createObjects()) {
        configureObjects();
    } else {
        emit error("Server creating error!");
    }
}

Server::Server(int port) {
    PORT = port;

    if(createObjects()) {
        configureObjects();
    } else {
        emit error("Server creating error!");
    }
}

bool Server::createObjects() {
    /* Instanting objects. Return true if success. */
    int counter = 0;

    if((ob_server_main = new QTcpServer) != NULL) {
        counter++;
    }

    return counter == 1 ? true : false;

}

void Server::configureObjects() {
    // configure main server;
    connect(ob_server_main, SIGNAL(newConnection()),SLOT(newConnection()));
}

bool Server::start() {
    if(!ob_server_main->isListening()) {
        bool result = ob_server_main->listen(QHostAddress::Any, PORT);
        PORT = ob_server_main->serverPort();
        return result;
    }
    emit error("Error in starting server!");
    return false;
}

void Server::stop() {
    ob_server_main->close();
}

void Server::newConnection() {
    emit newClient(ob_server_main->nextPendingConnection());
}

void Server::setPort(int portNumber) {
    PORT = portNumber;
    this->stop();
    this->start();
}

int Server::port() {
    return PORT;
}
