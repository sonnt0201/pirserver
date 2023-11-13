
#include <iostream>
#include <winsock2.h>
#include "models/server.hpp"
#include "models/Request.hpp"
 #pragma comment(lib, "Ws2_32.lib");

int main() {
    Request req = Request("POST /example/path HTTP/1.1\n"
        "Host: www.example.com\n"
        "Content-Type: application/x-www-form-urlencoded\n"
        "Content-Length: 27\n\n"
        "param1=value1&param2=value2"
        );
    
    std::vector<std::string> params = {};
    // params = req.params();
    // for (long i = 0; i < params.size(); i++)std::cout<<params[i]<<std::endl;
    std::cout<<req.method()<<std::endl;
    Server server = Server(8080);
    server.run();
    return 0;
}