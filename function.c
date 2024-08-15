#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// run this code and see the outputs
const char *name = "Octocat\n";

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        i == size - 1 ? printf("%d\n", arr[i]) : printf("%d, ", arr[i]);
    }
}

void mappedIntArray(int arr[], int size, int (*function)(int))
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = function(arr[i]);
    }
}

bool isEven(int n)
{
    return !(n & 1);
}

bool isPowerof2(int n)
{
    return n > 0 && !(n & (n - 1));
}

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

char *greetUser(const char username[])
{
    char *greeting = malloc(100 * sizeof(char));
    strcpy(greeting, "Good Morning, ");
    strcat(greeting, username);
    return greeting;
}

void display()
{
    printf("%s\n", greetUser(name));
    {
        int num1 = 255;
        int num2 = 256;

        const char *isEvenOutput1 = isEven(num1) ? " is Even" : " is Odd";
        const char *isEvenOutput2 = isEven(num2) ? " is Even" : " is Odd";
        printf("%d%s\n", num1, isEvenOutput1);
        printf("%d%s\n", num2, isEvenOutput2);
    }

    {
        int num1 = 127;
        int num2 = 2048;
        const char *isPow2output1 = isPowerof2(num1) ? " is a Power of 2" : " is not a Power of 2";
        const char *isPow2output2 = isPowerof2(num2) ? " is a Power of 2" : " is not a Power of 2";
        printf("%d%s\n", num1, isPow2output1);
        printf("%d%s\n", num2, isPow2output2);
    }
    printf("factorial(5) : %d\n", factorial(5));
    {
        int arr[6] = {0, 1, 2, 3, 4, 5};
        printf("nums\t:\t");
        printArray(arr, 6);
        printf("nums.map(fact):\t");
        mappedIntArray(arr, 6, factorial);
        printArray(arr, 6);
    }
}

int main()
{
    // run this code and see the outputs
    display();
    return 0;
}
