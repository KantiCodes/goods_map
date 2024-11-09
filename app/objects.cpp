#include <string>
#include <fstream>
#include <iostream>

static char* categoryRemoveSqlPath = "";
static char* categoryCreateSqlPath = "";
static char* categoryUpdateSqlPath = "";

class Category {
    public:
        int id;
        std::string name;
        Category(int id, std::string name) : id(id), name(name) {}

    
};


class Ab {
    private:
        const std::string tableName = "Ab";
    public:
        int pk;
        std::string name;
        int age;

        Ab(std::string name, int age): name(name), age(age) {}

        std::string toInsertQuery() {
            std::string insertQuery = "";
            insertQuery += name;
        };
};


std::string insertPattern = "INSERT INTO {:s} VALUES ({:s})";



    // char* cc;
    // std::cout << "cc: "<<cc << std::endl;
    // std::cout << "No problems with couting null pointers";

    // sqlite3* database;
    // int result = sqlite3_open(dbName, &database);
    
    // if (result != 0) {
    //     std::cout << "Error when creating the database" << std::endl << "Closing the program";
    //     exit(0);
    // }
    // else {
    //     std::cout << "Succesfully connected to the datbase" << std::endl;
    // }

    // DatabaseCreator dbCreator(database);
    // dbCreator.createAll();


static char* dbName = "test.db";

// class InsertQuery {
//     private:
//         std::string value = "";
    
//     public:
//         InsertQuery(const char* strings...) {
//             void(
//                 std::initializer_list<int> {
//                     (
//                         value += va
//                     )
//                 }
//             )
//         }

// };