
#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "Ws2_32.lib");

int main() {

    // init ws
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        printf("WSAStartup failed. \n");
        return 1;
    }

    // init server
    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        printf("Fail to create socket server. \n");
        WSACleanup();
        return 1;
    }

    // add address config
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // bind socket to address config
    if (
        bind(serverSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress)) == SOCKET_ERROR
    ) {
        printf("Fail to bind ! \n");
        closesocket(serverSocket);
        WSACleanup();
        return 1;

    };

    // turn on listener
    if (listen(serverSocket, SOMAXCONN) == SOCKET_ERROR) {
        printf("Fail to listen. \n");
        closesocket(serverSocket);
        WSACleanup();
        return 1;

    }

    printf("Server is listening on port 8080 ... \n");

    while (1) {
        // init client 
        SOCKET clientSocket = accept(serverSocket, NULL, NULL);
        if (clientSocket == INVALID_SOCKET) {
            printf("Fail to accept client connection. \n");
            WSACleanup();
            return 1;

        }

        // vars def
        char request[8000] = "";
        int bytesRead;
        

        //MAIN PROCESS - RECEIVE REQUEST
        while (
            (bytesRead = recv(clientSocket, request, sizeof(request), 0) ) > 0
        ) {
            char response[] = "HTTP/1.1 200 OK \nContent-Type: text/html\n\n<html><body><h1>hello world</h1></body></html>";
            send(clientSocket, response, strlen(response), 0);
            closesocket(clientSocket);
        }
    }
}