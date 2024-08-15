#include <stdio.h>
#include <stdlib.h>

// only for variables :
// request the compiler to store the variable in a CPU register for faster access

#pragma region functions

int sum(int num)
{
    register int result = 0;
    result += num;
    return result;
}

#pragma endregion

void display()
{
    printf("\n(result) + sum1\t\t\t:\t%d", sum(3004));
    printf("\n(result + sum1) + sum2\t\t:\t%d ", sum(35000));
    printf("\n(result + sum1 + sum2) + sum3\t:\t%d\n", sum(90836));
}

int main()
{
    display();
    return 0;
}
