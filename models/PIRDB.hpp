
#include "../lib/sqlite3.h"
#include<iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctime>
#include <chrono>

#pragma once

#define SUCCESS 1
#define FAIL 0
#define ROWMAX 10
/* 
    PIRDB is the database specifically configured for pir data sent from esp32 
    by default, it always has 4 column: 'id', 'esp_id', 'vol' and 'time'
*/
class PIRDB {
    private:
        sqlite3* db;
        int deleteAllTableContent() ;
    public:
    /*
        REQUIRED: dbFileName must have .db extension
    */
    PIRDB(std::string dbFileName);
    int numOfRows();
    std::vector<std::string> getDataWithID(int ID);

    /* Add data to database - return SQLITE_DONE if saving sucessfully */
    int addData(int deviceID, std::string vol, int time);
    
    int allToCSV() ;
};
