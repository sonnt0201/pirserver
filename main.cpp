

#include <iostream>
#include <winsock2.h>

#include "controllers/server.hpp"
#include "lib/sqlite3.h"
#include "models/PIRDB.hpp"


int main() {
    
    PIRDB db = PIRDB("esp32.db");
    
    // std::cout<<"rows num: "<<db.numOfRows()<<std::endl;
    // int rc = db.addData(0, "123 456 123", 123656);
    // std::vector<std::string> data = db.getDataWithID(4);
    // std::cout<<data[0]<<" "<<data[1]<<" "<<data[2]<<std::endl;
    Server server = Server(8080);
    server.run();
    return 0;
}