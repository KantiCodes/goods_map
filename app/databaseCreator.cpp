#include <sqlite3.h>
#include <iostream>
#include <constants.cpp>


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
        int executeSql(std::string sql) {
            char* errorMsg;
            const char* sqlAsChar = sql.c_str();
            int result = sqlite3_exec(database, sqlAsChar, callback, 0, &errorMsg);

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