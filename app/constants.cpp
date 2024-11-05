#include <iostream>
#include <fstream>
#include "helpers.cpp"

const char* categorySqlPath = "app/sql/createTableCategory.sql";
const char* tableSqlPath = "app/sql/createTableCategory.sql";
const char* insertCategorySql = "app/sql/insertCategory.sql";

static std::string createCategorySql;
static std::string createPlaceSql;




void initializeGlobals () {
    readContents(categorySqlPath, createCategorySql);
    readContents(tableSqlPath, createPlaceSql);
};
