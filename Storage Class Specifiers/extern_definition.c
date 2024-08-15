#include <stdio.h>
// to compile these two extern linked files
//          -> gcc extern_definition.c extern_declaration.c -o program
// to run the compiled executable
//          -> ./program

int global_var = 100; // Definition of the global variable

void print_global()
{
    printf("Global variable: %d\n", global_var);
}
