/* C Preprocessor */
/*
    Preprocessor are program that process the source code before compilation.
    

    There are several step are involve between converting a program and executing a program in C.

                      Preprocessor
                            |
                        C Program        
                            |
                    Is preprocessor used in program ----(NO)-->Compiler-->Linker--->Executable code &
                                    |                             |                |      then run
                                    |                             |               |
                                    |                             |            Object Code     
                                    |                             |
                                    |                             |
                                  (YES)                           | 
                     Preprocess the preprocess action ------------|               

    The C preprocessor is a preprocessor that is used by compiler to transform your code before compilation

    It is called micro preprocessor because it allows us to add macros.
    All preprocessor directly start with # symbol.

    There are following list of preprocessor directories :-
        #include
        #define
        #undef
        #ifdef
        #indef
        #if
        #else
        #elif
        #endef
        #error
        #program
*/