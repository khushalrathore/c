#include <stdio.h>

void conditional_if_else()
{
    int target = 10;
    if (target == 10)
        printf("Target is equal to 10\n");
    else
    {
        printf("Target is not equal to 10\n");
    }
}

void conditional_ternary()
{
    int target = 5;
    target == 10 ? printf("Target is equal to 10\n")
                 : printf("Target is not equal to 10\n");
}
void short_circuiting()
{
    int target = 10;
    target == 10 && printf("Target is equal to 10\n");
    target != 10 && printf("Target is not equal to 10\n");
}
void display()
{
    conditional_if_else();
    conditional_ternary();
    short_circuiting();
}
int main()
{
    display();
}
