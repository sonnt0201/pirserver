#include <stdio.h>
#include <iostream>
#include <string>

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
        std::string body = "No body sent in response !";
        
        char* rawText() ;
};