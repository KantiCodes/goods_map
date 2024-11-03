# goods_map

# 2024.02.11
Trying to make a simple file that will call `sqlite3_open/close` and create a database. Took my 3 hours to figure out how to correctly pass the sqlite3 library to compiler. `g++ database_test.cpp -lsqlite3` finally did the job. This ain't python but I like the concept of passing binaries/libs into the compiler and getting an executable
 
# 2024.03.11
- Learning about difference between `char* something` and `char* something=nullptr`. The difference is that the first one is a random memory allocation and can be anything
and the second one is a specific way of pointing to an invalid memory address.

- Took some time but I can create database tables using my `DatabaseCreator`. Getting more familiar with cpp pointers/addresses.

- I had to free the `errorMsg` that I pass to `sqlite3_exec` method since (aparently) C level code uses `malloc` that I don't know yet what stands for but I assume `manual_allocation`. Since the `malloc` is used, then that
memory address gets handed over to user (me and my c++ code). So I need to dereference it after using