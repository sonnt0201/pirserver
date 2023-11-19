#include "server.hpp"
#include "Controller.hpp"
#pragma comment(lib, "Ws2_32.lib");

Server::Server(int port) {
    this->port = port;
    // init ws
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        printf("WSAStartup failed. \n");
        
    }

    // init server
    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (serverSocket == INVALID_SOCKET) {
        printf("Fail to create socket server. \n");
        WSACleanup();
       
    }

    this->serverSocket = serverSocket;
    // add address config
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(port);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // bind socket to address config
    if (
        bind(this->serverSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress)) == SOCKET_ERROR
    ) {
        printf("Fail to bind ! \n");
        closesocket(this->serverSocket);
        WSACleanup();
       
    };

  
};

void Server::run() {
   
    // turn on listener
    if ( listen(this->serverSocket, SOMAXCONN) == SOCKET_ERROR) {
        printf("Fail to listen. \n");
        closesocket(serverSocket);
        WSACleanup();
        // return 1;

    }

    printf("Server is listening on port 8080 ... \n");

    while (1) {
        // init client 
        SOCKET clientSocket = accept(serverSocket, NULL, NULL);
        if (clientSocket == INVALID_SOCKET) {
            printf("Fail to accept client connection. \n");
            WSACleanup();
           
        }

        // vars def
        char request[8000] = "";
        int bytesRead;
        

        //MAIN PROCESS - RECEIVE REQUEST
        while (
            (bytesRead = recv(clientSocket, request, sizeof(request), 0) ) > 0
        ) {
             Request req = Request(request);
            controller(clientSocket, req);
            closesocket(clientSocket);
        }
    }

    closesocket(serverSocket);
    WSACleanup();
}

