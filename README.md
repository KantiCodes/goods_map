# goods_map

# 2024.02.11
Trying to make a simple file that will call `sqlite3_open/close` and create a database. Took my 3 hours to figure out how to correctly pass the sqlite3 library to compiler. `g++ database_test.cpp -lsqlite3` finally did the job. This ain't python but I like the concept of passing binaries/libs into the compiler and getting an executable
 