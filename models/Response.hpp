#include <stdio.h>
#include <iostream>
#include <string>
#include <winsock2.h>
#pragma once

class Response {
    private:
        // Set statusCode string when init
        void setStatusCode();
        
        std::string statusCode;
        std::string contentType;
        std::string setHtmlContent();
        std::string setJsonContent();
    public:
        Response(int status, std::string contentType );
        std::string htmlPath;
        std::string jsonData;

        // body content for response
        std::string body = "No body sent in response !";
        
        // get full raw text of the response
        char* rawText() ;

        // send response to client socket
        void sendClient(SOCKET client);
};