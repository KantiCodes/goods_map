#include <string>
#include <fstream>
#include <iostream>



class Category {
    public:
        int id;
        std::string name;
        Category(int id, std::string name) : id(id), name(name) {}


    
};


// class AlmostOrm {
//     std::ifstream inFile;
//     inFile.open("app/sql/createTableCategory.sql");
//     private:
//         static sql

//     public:
//         Category toCategory (Category &dbObject) {
//             auto something = dbObject. name;

//         };
    
        

// };