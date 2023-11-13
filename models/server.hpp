
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
    Server(int port);
    void run();
    void controller(SOCKET clientSocket, Request request);
    

};

