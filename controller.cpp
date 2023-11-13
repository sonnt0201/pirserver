#include "models/server.hpp"

// #pragma once

void Server::controller(SOCKET clientSocket, Request request) {
    
            
            std::cout<<request.getText()<<std::endl;
           
            
            // char response[] = "HTTP/1.1 200 OK \nContent-Type: text/html\n\n<html><body><h1>hello world</h1></body></html>";
            Response response = Response(200, "text/html");

            response.body = "<h1>hello world</h1>";
            send(clientSocket, response.rawText(), strlen(response.rawText()), 0);
}