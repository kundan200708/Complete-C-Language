/*
Data Type:-
         --> Data type is used to defiend nature of data that is it tells the compiler,
          about the data to be further processed in the program .
         --> C language provides a variety of data types so ,programmers or developers can mainpulate 
         different type of data.



                           DATA TYPE
                               |
      -------------------------------------------------
      |                      |                       |
Predefined / Basic      User-defined / Derived      Empty
                                                     |
                                                    void

      |
-------------------------
|                       |
Numeric             Non-Numeric
|                       |
Integer (int)        Character (char)
|                    /           \
|               signed        unsigned
|
-------------------
|                 |
Short            Long
|                 |
/\              / \
signed unsigned signed unsigned

Real
|
-----------------------
|          |          |
float     double   long double

// here I am defining user define data types 
User-defined / Derived
|
------------------------
|          |           |
Array    String     Pointer
|
Structure
|
Union
|
Enum
|
Bit Fields



 Useful tips of C language :-
        - All statement are enter in small letter.
        - Every C statment must ends with semicolon[;].
        - Each instrucation is written in separated statement.
        - Comment will be written in (// &&/*).
        - main() is global function, it is a function which can write multiple function inside the main function.
        - For reading of datatypes use the following characters for depending of variable datatypes.
                
        | -------------------- | 
        |%d| --------> | int   |
        |%f| --------> | float |
        |%c| --------> | char  |
        |%s| --------> | string|


          |      Datatype       |   Size  |            range            | format |
        |---------------------|---------|-----------------------------|--------|
        | Signed / Short int  | 2 bytes | -32786 to +32768            |%hd     |
        | Unsigned int        | 2 bytes | 65535                       |%hu     |
        | int / long int      | 4 bytes | -21417483648 to +21417483648|%d / %ld|
        | Unsigned long int   | 8 bytes | 0 to 4294967295             |%ud     |
        | char / unsigned char| 1 bytes | -127 to +128                |%c      |
        | Unsigned char       | 1 bytes | 0 to 255                    |%uc     |
        | float| 4bytes       | 4 bytes | 1.2e-38 to 1.2e+38          |%f      |
        | double| 8bytes      | 8 bytes | 1.7e-308 to 1.7e+308        |%lf     |


*/