#include <stdio.h>
#include <stdlib.h>

// only for variables :
// automatically allocates and deallocates the storage when entering and exiting the block scope.
// optional because local variables are auto by default.

#pragma region functions

void count_calls()
{
    auto int count = 0;
    count++;
    printf("Function has been called %d times\n", count);
}

int sum(int num)
{
    auto int result = 0;
    result += num;
    return result;
}

#pragma endregion

void display()
{
    count_calls();
    count_calls();
    count_calls();

    printf("\n(result) + sum1\t\t\t:\t%d", sum(34));
    printf("\n(result + sum1) + sum2\t\t:\t%d ", sum(35));
    printf("\n(result + sum1 + sum2) + sum3\t:\t%d\n", sum(36));
}

int main()
{
    display();
    return 0;
}
