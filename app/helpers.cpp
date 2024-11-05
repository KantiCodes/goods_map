#include <iostream>
#include <fstream>

void readContents(const char* path, std::string& stringToHoldValue) {
    std::string line;
    std::ifstream inFile;
    inFile.open("app/sql/createTableCategory.sql");
    if (!inFile) {
        std::cerr << "Failed to open" << path << ". Exiting";
        exit(1);
    };
    
    while (std::getline(inFile, line)) {
        stringToHoldValue += line + "\n";
    }
    inFile.close();
}