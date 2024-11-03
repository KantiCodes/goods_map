#include <sqlite3.h>
#include <iostream>
#include "objects.cpp"

const char* dbName = "test.db";

const char* createCategorySql = 
    "CREATE TABLE IF NOT EXISTS Category ("
    "    id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "    name VARCHAR(255) NOT NULL"
    ")";

const char* createPlaceSql =
"CREATE TABLE IF NOT EXISTS Place ("
"    id INTEGER PRIMARY KEY AUTOINCREMENT,"
"    name VARCHAR(255) NOT NULL"
")";  // Added semicolon at the end


static int callback(void *NotUsed, int argc, char **argv, char **azColName){
  int i;
  for(i=0; i<argc; i++){
    printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
  }
  printf("\n");
  return 0;
}

class DatabaseCreator {
    private:
        int executeSql(const char* sql) {
            char* errorMsg;
            int result = sqlite3_exec(database, sql, callback, 0, &errorMsg);

            if (result != SQLITE_OK) {
                std:: cout << "Error when executing sql: " << std::endl << sql << std::endl << errorMsg << std::endl;
                sqlite3_free(errorMsg);
            } else {
                std::cout << "SQL execution successful" << std::endl;
            }
            return result;
        };

    public:
        sqlite3* database;

        DatabaseCreator(sqlite3* database) : database(database) {}
        
        void createAll() {
            std::cout << "Enabling foreign key constraints" << std::endl;
            auto a = executeSql("PRAGMA foreign_keys = ON;");

            std::cout << "Making Category table" << std:: endl;
            auto b = executeSql(createCategorySql);

            std::cout << "Making Place table" << std:: endl;
            executeSql(createPlaceSql);
        }

};



class AlmostOrm {
    sqlite3* database;
};

int main () {
    char* a = "abc";
    const char* aa = a;

    char* cc;
    std::cout << "cc: "<<cc << std::endl;
    std::cout << "No problems with couting null pointers";

    sqlite3* database;
    int result = sqlite3_open(dbName, &database);
    
    if (result != 0) {
        std::cout << "Error when creating the database" << std::endl << "Closing the program";
        exit(0);
    }
    else {
        std::cout << "Succesfully connected to the datbase" << std::endl;
    }

    DatabaseCreator dbCreator(database);
    dbCreator.createAll();
}