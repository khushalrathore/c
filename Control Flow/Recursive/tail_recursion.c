#include <stdio.h>

#pragma region functions

// Tail Recursive (recursive call is the last thing to happen)

size_t factorial(int n, size_t result)
{
    if (n < 1)
        return result;

    return factorial(n - 1, result * n);
}

#pragma endregion

void display()
{
    int n = 20;
    int prodInitializer = 1;
    int sumInitializer = 0;
    printf("\nfactorial(%d)\t:\t%zu\n\n", n, factorial(n, prodInitializer));
}

int main()
{
    display();
    return 0;
}
