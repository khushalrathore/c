#include <stdio.h>
// run this code and see the outputs
// typedef unsigned long -> size_t ( #predefined )

void printNums(int n)
{
    printf("numbers.print [0,%d)\t:\t", n);
    size_t i = 0;

    do
    {
        (i == n - 1) ? printf("%lu", i) : printf("%lu, ", i);
        i++;
    } while (i < n);
    n == 0 ? printf("John Cena\n") : printf("\n");
}

void sumNums(int n)
{
    size_t i = 0;
    size_t result = 0;

    do
    {
        result = result + i;
        i++;
    } while (i < n);
    printf("numbers.sum [0,%d)\t:\t%lu\n", n, result);
}

void prodNums(int n)
{
    size_t i = 1;
    size_t result = 1;

    do
    {
        result = result * i;
        i++;
    } while (i < n);
    n == 0 ? printf("numbers.product [0,%d)\t:\t%d\n", n, 0)
           : printf("numbers.product [0,%d)\t:\t%lu\n", n, result);
}

void factorial(int n)
{
    size_t result = 1;
    size_t i = 1;

    do
    {
        result = result * i;
        i++;
    } while (i < n);
    printf("factorial(%d)\t\t:\t%lu\n", n, result);
}

void while_vs_do_while()
{
    int x = -5;

    printf("\n\nwhile(-5 > 0) prints \t:\t");
    while (x > 0)
    {
        printf("%d", x);
        x++;
    }
    printf("<No Output> (bcoz condition is not true)");
    printf("\n");

    x = -5;
    printf("do while(-5 > 0) prints\t:\t");
    do
    {
        printf("%d (bcoz condition is checked after first loop)", x);
        x++;
    } while (x > 0);
    printf("\n\n");
}

void display()
{
    int range = 10;
    printNums(range); // 0 indexed
    sumNums(range);   // 0 indexed
    prodNums(range);  // 1 indexed obv... ((num1*num2*num3....) * 0 = 0 )
    factorial(range);
    factorial(0);
    while_vs_do_while();
}

int main()
{
    // run this code and see the outputs
    display();
    return 0;
}
