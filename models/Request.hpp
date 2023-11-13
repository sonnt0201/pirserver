
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <stdio.h>
#pragma once
#define GET 0;
#define POST 1;
#define PUT 2;
#define DEL 3;
#define INVALID_METHOD -1;
class Request {
    private:
        // raw text of the request in std::string type
        std::string rawText;
       
    public:
    // Initializer
    Request(char request[8000]); 

    // METHOD of HTTP Request (GET - POST - PUT - DELETE)
    int method();

    //Path of the method
    std::string path();

    // List of the parameters in the request
    std::vector<std::string> params () ;

    // Get the value of a parameter in the request
    std::string value(std::string param);
    std::string body();
    std::string getText() ;
};