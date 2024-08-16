#include <stdio.h>

#pragma region functions

// Head Recursive (not Tail Recursive)

size_t factorial_less_optimized(int n)
{
    return n < 1 ? 1 : n * factorial_less_optimized(n - 1);
}

#pragma endregion

void display()
{
    int n = 20;
    int prodInitializer = 1;
    int sumInitializer = 0;
    printf("\nfactorial(%d)\t:\t%zu\n\n", n, factorial_less_optimized(n));
}

int main()
{
    display();
    return 0;
}
