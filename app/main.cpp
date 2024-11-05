#include <sqlite3.h>
#include <iostream>
#include "objects.cpp"
#include <fstream>
#include "constants.cpp"
#include "databaseCreator.cpp"

static char* dbName = "test.db";

int main () {

    initializeGlobals();

    std::cout << createCategorySql;
    std::cout << createPlaceSql;
    std::cout << "printed";



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