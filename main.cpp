

#include <iostream>
#include <winsock2.h>

#include "controllers/server.hpp"
#include "lib/sqlite3.h"
#include "models/PIRDB.hpp"


int main() {
      
    Server server = Server(8080);
    server.run();
    return 0;
}