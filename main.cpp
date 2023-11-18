

#include <iostream>
#include <winsock2.h>
#include "models/server.hpp"
#include "models/Request.hpp"
#include "lib/sqlite3.h"
#include "models/PIRDB.hpp"
static int callback(void *data, int argc, char **argv, char **azColName) {
    for (int i = 0; i < argc; i++) {
        std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << std::endl;
    }
    return 0;
}

int main() {
    
    // PIRDB db = PIRDB("esp32.db");
    
    // std::cout<<db.numOfRows()<<std::endl;
    // std::vector<std::string> row = db.getDataWithID(0);
    // for (long i = 0; i < 3; i++) std::cout<<row[i]<<std::endl;

    Server server = Server(8080);
    
    server.run();
    return 0;
}