
#include<winsock2.h>
#include<iostream>
#include<stdio.h>
#include "Request.hpp"
#include "Response.hpp"
#pragma comment(lib, "Ws2_32.lib");

#pragma once

class Server {
    private:
        int port;
        SOCKET serverSocket;
    public:
    // Initialize server using IPv4 and with port
    Server(int port);

    // listen to clients
    void run();

    // Main process to handle request and sent response
    void controller(SOCKET client, Request request);
    

};

