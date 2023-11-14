#include "models/server.hpp"

// #pragma once

void Server::controller(SOCKET client, Request request) {
    // main process goes here
    // add your code ...
    std::cout<<request.method();

    // init a response object
    Response response = Response(200, "text/html");

    // configure response
    response.body = "<html><body><h1>Hello from esp32 server</h1></body></html>";

    // send
    response.sendClient(client);
}