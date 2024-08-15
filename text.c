#include <stdio.h>
#include <string.h>

#pragma region functions

void mutable_string()
{
    char mutable_string[100] = "Goodbye, World!"; // give size to make it actually mutable
    mutable_string[3] = '8';
    mutable_string[7] = '0';
    mutable_string[10] = 'y';

    printf("\nmutable_str\t:\t%s", mutable_string);
    printf("\nm_str length\t:\t%zu\n", strlen(mutable_string));

    char appendThis[] = " lol, jk";
    strcat(mutable_string, appendThis);

    printf("\nmutated_str\t:\t%s", mutable_string);
    printf("\nm_str length\t:\t%zu\n", strlen(mutable_string));
}

void immutable_string()
{
    char *immutable_string = "Hello, World!\n";
    printf("\nimmutable_str\t:\t%s", immutable_string);
    printf("i_str length\t:\t%zu\n", strlen(immutable_string));
}

#pragma endregion

void display()
{
    immutable_string();
    mutable_string();
}

int main()
{
        display();
    return 0;
}
