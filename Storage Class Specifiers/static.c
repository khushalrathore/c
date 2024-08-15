#include <stdio.h>
#include <stdlib.h>

// Static on Global Variables: Limits the scope of the variable to the file.
// Static on Functions: Restricts the function's visibility to the file it's declared in.
// Static inside Functions: Keeps the variable's value between function calls.

static char *declaredGloballyYetLocalToThisFile = "Woohoooooo!!!"; // dont name your variables this long

static void localFn()
{
    printf("static void localFn() ; Only accessible to contents of this file.");
}

#pragma region functions

void count_calls()
{
    static int count = 0;
    count++;
    printf("Function has been called %d times\n", count);
}

int sum(int num)
{
    // try running this code after removing static from here
    static int result = 0;
    // and see the results in console
    result += num;
    return result;
}

#pragma endregion

void display()
{
    count_calls();
    count_calls();
    count_calls();

    localFn();

    printf("\n(result) + sum1\t\t\t:\t%d", sum(34));
    printf("\n(result + sum1) + sum2\t\t:\t%d ", sum(35));
    printf("\n(result + sum1 + sum2) + sum3\t:\t%d\n", sum(36));
}

int main()
{
    display();
    return 0;
}
