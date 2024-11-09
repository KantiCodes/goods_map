# goods_map

# 2024.11.02
Trying to make a simple file that will call `sqlite3_open/close` and create a database. Took my 3 hours to figure out how to correctly pass the sqlite3 library to compiler. `g++ database_test.cpp -lsqlite3` finally did the job. This ain't python but I like the concept of passing binaries/libs into the compiler and getting an executable
 
# 2024.11.03
- Learning about difference between `char* something` and `char* something=nullptr`. The difference is that the first one is a random memory allocation and can be anything
and the second one is a specific way of pointing to an invalid memory address.

- Took some time but I can create database tables using my `DatabaseCreator`. Getting more familiar with cpp pointers/addresses.

- I had to free the `errorMsg` that I pass to `sqlite3_exec` method since (aparently) C level code uses `malloc` that I don't know yet what stands for but I assume `manual_allocation`. Since the `malloc` is used, then that
memory address gets handed over to user (me and my c++ code). So I need to dereference it after using

# 2024.11.05
Laying out file structure and learning to use `fstream` to load sqlCommands in files ->

## Next steps:
Paramterized CRUD queries

# 2024.11.08
## Note to myself :D
My biggest fear when going from Python to learn C++ was that I don't know how to write and read `real` code. I also thought
that by coding a lot in `Python` I effectively went _backwards_ in my development and will never understand the CPP concepts such as memory management and references. Turns out that is not true and while CPP has way more low level concepts and is fundamentally harder, none of this concepts are beyond my perception and my experience as developer in general applies.

Sure I still get confused using pointers and references but the bottom line is, it's not black magic I just lack of practice. Let's go!

## Worked on today
- Learning/Creating Makefile to build my app easier.
- Learning how to do functions that take a dynamic number of arguments: `Variadic templates` and  `std::string... something`
Thank you Guido for making us not have to think about it in python.


# 2024.11.09
- Learning about:
- - abstract claases
- - virutal pure/virutal methods
- - basics of inheritance   
- made cheatsheet