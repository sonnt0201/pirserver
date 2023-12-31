#include "server.hpp"
#include "Controller.hpp"
#include "Filter.hpp"
#pragma comment(lib, "Ws2_32.lib");

Server::Server(int port)
{
    this->port = port;
    // init ws
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        printf("WSAStartup failed. \n");
    }

    // init server
    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (serverSocket == INVALID_SOCKET)
    {
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
        bind(this->serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR)
    {
        printf("Fail to bind ! \n");
        closesocket(this->serverSocket);
        WSACleanup();
    };
};

void Server::run()
{

    // turn on listener
    if (listen(this->serverSocket, SOMAXCONN) == SOCKET_ERROR)
    {
        printf("Fail to listen. \n");
        closesocket(serverSocket);
        WSACleanup();
        // return 1;
    }

    printf("Server is listening on port 8080 ... \n\n");

    while (1)
    {
        // init client
        SOCKET clientSocket = accept(serverSocket, NULL, NULL);
        if (clientSocket == INVALID_SOCKET)
        {
            printf("Fail to accept client connection. \n");
            WSACleanup();
        }

        // vars def
        char request[8000] = "";
        int bytesRead;

        // MAIN PROCESS - RECEIVE REQUEST
        while (
            (bytesRead = recv(clientSocket, request, sizeof(request), 0)) > 0)
        {
            // Start timer
            time_t now = time(0);
            std::cout << "_______________ \n" << ctime(&now);
            auto start = std::chrono::high_resolution_clock::now();
            
            // Init request object
            Request req = Request(request);
            int method = req.method();
            std::string strMethod = (method == GET)? "GET": (method == POST) ? "POST" : (method == PUT) ? "PUT" : "DELETE";

            // Delegate to filter and controller
            bool valid = filter(req);
            if (valid)
                controller(clientSocket, req); else send400(clientSocket);
            closesocket(clientSocket);

            // Counting time
            auto end = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
            std::cout <<"Finish handling "<<strMethod<< " request in: " << duration.count() << " millisecs" << std::endl <<std::endl;
        }
    }

    closesocket(serverSocket);
    WSACleanup();
}
