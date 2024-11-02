#include <sqlite3.h>
#include <iostream>


int main () {

    int a;
    int b;
    sqlite3 *pointer;
    int D = sqlite3_open("test.db", &pointer);
    std::cout << D;
    sqlite3_close(pointer);

}