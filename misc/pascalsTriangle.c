#include <stdio.h>
#include <stdlib.h>

void pascalTriangle()
{
    printf("enter height: ");
    int n;
    scanf("%d", &n);

    int **arr = malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i)
    {
        arr[i] = malloc((i + 1) * sizeof(int));
        arr[i][0] = 1;
        printf("1  ");
        for (int j = 1; j < i; ++j)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            printf("%d  ", arr[i][j]);
        }
        if (i > 0)
        {
            arr[i][i] = 1;
            printf("1  ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; ++i)
    {
        free(arr[i]);
    }
    free(arr);
}

void display()
{
    pascalTriangle();
}

int main()
{
    display();
    return 0;
}