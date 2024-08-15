#include <stdio.h>

extern int global_var; // Declaration of the global variable

void print_global(); // Function declaration

int main()
{
    print_global(); // Call function that uses the global variable
    return 0;
}
