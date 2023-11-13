
#include <iostream>
#include <winsock2.h>
#include "models/server.hpp"
#include "models/Request.hpp"
 #pragma comment(lib, "Ws2_32.lib");

int main() {
  
    Server server = Server(8080);
    server.run();
    return 0;
}