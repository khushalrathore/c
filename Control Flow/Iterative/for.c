#include <stdio.h>
#include <stdbool.h>
// typedef unsigned long -> size_t ( #predefined )

#pragma region functions

void printNums(int n)
{
    printf("numbers.print [0,%d)\t:\t", n);
    size_t i;
    for (i = 0; i < n; ++i)
    {
        (i == n - 1) ? printf("%lu", i) : printf("%lu, ", i);
    }
    n == 0 ? printf("<No Output>\n") : printf("\n");
}

void sumNums(int n)
{
    size_t i;
    size_t result = 0;
    for (i = 0; i < n; ++i)
    {
        result = result + i;
    }
    printf("numbers.sum [0,%d)\t:\t%lu\n", n, result);
}

void prodNums(int n)
{
    size_t i;
    size_t result = 1;
    for (i = 1; i < n; ++i)
    {
        result = result * i;
    }
    n == 0 ? printf("numbers.product [0,%d)\t:\t%d\n", n, 0)
           : printf("numbers.product [1,%d)\t:\t%lu\n", n, result);
}

void factorial(int n)
{
    size_t result = 1;
    for (int i = 1; i < n; ++i)
    {
        result = result * i;
    }
    printf("factorial(%d)\t\t:\t%lu\n", n, result);
}

void printNumsUsingBreak(int n)
{
    printf("\nloop breaks if the condition(isMultipleOf3) is met\n");
    printf("numbers.print [0,%d)\t:\t", n);
    size_t i = 0;

    for (i = 0; i < n; ++i)
    {
        if (i % 3 == 0)
            break;
        (i == n - 1) ? printf("%lu", i) : printf("%lu, ", i);
    }
    n == 0 ? printf("John Cena\n") : printf("\n\n");
}

void printNumsUsingContinue(int n)
{

    printf("\nloop skips the number if the condition(isMultipleOf3) is met\n");
    printf("numbers.print [0,%d)\t:\t", n);
    size_t i = 0;

    for (i = 0; i < n; ++i)
    {
        if (i % 3 == 0)
            continue;
        (i == n - 1) ? printf("%lu", i) : printf("%lu, ", i);
    }
    n == 0 ? printf("John Cena\n") : printf("\n\n");
}

#pragma endregion

void display()
{
    int range = 10;

    printNumsUsingBreak(range);    // 0 indexed with a breaking condition inside the block
    printNumsUsingContinue(range); // 0 indexed with a breaking condition inside the block
    printNums(range);              // 0 indexed

    sumNums(range); // 0 indexed

    prodNums(range); // 1 indexed obv... ((num1*num2*num3....) * 0 = 0 )
    factorial(range);
    factorial(0);
}

int main()
{
        display();
    return 0;
}
