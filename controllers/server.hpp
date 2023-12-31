
#include<winsock2.h>
#include<iostream>
#include<stdio.h>
#include "../models/Request.hpp"
#include "../models/Response.hpp"
#include "../models/PIRDB.hpp"
#include "../lib/lib.hpp"
#pragma comment(lib, "Ws2_32.lib");

#pragma once

class Server {
    private:
        int port;
        SOCKET serverSocket;
       
    public:
    // Initialize server using IPv4 and with port
    Server(int port);

    // PIRDB database;
    // listen to clients
    void run();
};



