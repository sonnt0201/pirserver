#include "models/server.hpp"
#include "models/Request.hpp"
// #pragma once

void Server::controller(SOCKET client, Request request)
{
    // main process goes here
    // add your code ...

    // std::cout<<request.getText()<<"\n";
    if (request.method() == 1)
    {
        std::string espId = request.value("esp-id"),
                    vol = request.value("vol"),
                    time = request.value("time");

        if (espId == "" || vol == "" || time == "")
        {
            std::cout << "Request param value error"
                      << "\n";
            std::cout << "Request raw text: \n"<< request.getText()<<"\n\n";
        }

        std::cout << "device id: " << espId << "\n";
        std::cout << "voltage: " << vol << "\n";
        std::cout << "time: " << time << "\n\n";
        // init a response object
        Response response = Response(200, "text/plain");
        response.body = "Data saved sucessfully";
        // configure response
        // response.setHtmlContent("index.html");

        // send
        response.sendClient(client);
        return;
    }


    if (request.method() == 0) {
        Response response = Response(200, "text/html");
        response.setHtmlContent("index.html");
        // printf("%s\n",response.rawText();
        response.sendClient(client);
        return;
    }
}