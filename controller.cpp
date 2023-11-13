#include "models/server.hpp"

// #pragma once

void Server::controller(SOCKET client, Request request) {
    Response response = Response(200, "text/html");
    response.body = "<h1>Hello from ESP32 Server! </h1>";
    response.sendClient(client);
}