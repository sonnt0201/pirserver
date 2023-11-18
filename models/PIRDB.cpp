#include "PIRDB.hpp"
#include <string.h>

static int callback(void *data, int argc, char **argv, char **azColName) {
    for (int i = 0; i < argc; i++) {
        std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << std::endl;
    }
    return 0;
}

PIRDB::PIRDB(std::string dbFileName)
{
    // sqlite3 *db = this->db;
    // this->db = db;
    char *charf = strdup(dbFileName.c_str());
    int rc = sqlite3_open(charf, &this->db);


    const char *createTableSQL = "CREATE TABLE IF NOT EXISTS your_table ("
                                 "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                 "esp_id INTEGER NOT NULL,"
                                 "vol VARCHAR NOT NULL,"
                                 "time INTEGER NOT NULL);";

    rc = sqlite3_exec(db, createTableSQL, 0, 0, 0);


  
}


int PIRDB::numOfRows()
{
    const char *countRowsSQL = "SELECT COUNT(*) FROM your_table;";
    sqlite3_stmt *stmt;

    int rc = sqlite3_prepare_v2(this->db, countRowsSQL, -1, &stmt, 0);
    if (rc != SQLITE_OK)
    {
        std::cerr << "Cannot prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
        return -1;  // Return -1 to indicate an error
    }

    rc = sqlite3_step(stmt);

    if (rc == SQLITE_ROW)
    {
        int rowCount = sqlite3_column_int(stmt, 0);
        sqlite3_finalize(stmt);
        return rowCount;
    }
    else
    {
        std::cerr << "Query failed: " << sqlite3_errmsg(this->db) << std::endl;
        sqlite3_finalize(stmt);
        return -1;  // Return -1 to indicate an error
    }
};

std::vector<std::string> PIRDB::getDataWithID(int ID)
{
    std::vector<std::string> result;

    const char *selectDataSQL = "SELECT esp_id, vol, time FROM your_table WHERE id = ?;";
    sqlite3_stmt *stmt;
   
    int rc = sqlite3_prepare_v2(this->db, selectDataSQL, -1, &stmt, 0);
    if (rc != SQLITE_OK)
    {
        std::cerr << "Cannot prepare statement: " << sqlite3_errmsg(db) << std::endl;
        return result;  // Return an empty vector to indicate an error
    }

    // Bind the ID parameter
     sqlite3_bind_int(stmt, 1, ID);
    
    rc = sqlite3_step(stmt);

    if (rc == SQLITE_ROW)
    {
        result.push_back(std::to_string(sqlite3_column_int(stmt, 0)));  // esp_id
        result.push_back(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));  // vol
        result.push_back(std::to_string(sqlite3_column_int(stmt, 2)));  // time
    }
    else
    {
        std::cerr << "Query failed: " << sqlite3_errmsg(db) << std::endl;
    }

    // Finalize the statement
    sqlite3_finalize(stmt);

    return result;
}

void PIRDB::addData(int deviceID, std::string vol, int time) {
    const char *query = "INSERT INTO pir "
                        "VALUE(?, ?, ?, ?);";

    sqlite3_stmt *stmt;

    int rc;

    rc = sqlite3_prepare_v2(this->db, query, -1, &stmt, 0);

    if (rc != SQLITE_OK) {
        
    }


};