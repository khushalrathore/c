#include <stdio.h>
#include <stdlib.h>

#pragma region printArray

void print_1_d_array(int size, int num[size])
{
    printf("\n1D Array : ");
    printf("\t[ ");
    for (int i = 0; i < size; ++i)
    {
        (i == size - 1) ? printf("%d ", *(num + i)) : printf("%d, ", *(num + i));
    }
    printf("]\n");
}

void print_2_d_array(int rows, int cols, int matrix[rows][cols])
{
    printf("\n2D Array : ");
    for (int i = 0; i < rows; ++i)
    {
        i == 0 ? printf("\t[ ") : printf("\t\t[ ");
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("]\n");
    }
    printf("\n");
}

#pragma endregion

#pragma region fillArray

void fill_1_d_array(int size, int num[size])
{
    int i = size;
    while (i--)
    {
        num[i] = i;
    }
}

void fill_2_d_array(int rows, int cols, int matrix[rows][cols], int value)
{
    int i = rows;
    int j = cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value++;
        }
    }
}

#pragma endregion

void oneDimensional()
{
    int num[10] = {0};
    int numSize = sizeof(num) / sizeof(num[0]);
    fill_1_d_array(numSize, num);
    num[2] = 2000;
    print_1_d_array(numSize, num);
}

void twoDimensional()
{
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = {0};
    fill_2_d_array(rows, cols, matrix, 0);

    print_2_d_array(rows, cols, matrix);
}

void one_d_dynamicArray(int n)
{
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = i;
        i == n - 1 ? printf("%d", arr[i]) : printf("%d, ", arr[i]);
    }
    printf("\n");
    free(arr);
}

void two_d_dynamicArray(int rows, int cols)
{
    int **arr = malloc(rows * sizeof(int *)); // free this later
    int count = 0;

    for (int i = 0; i < rows; ++i)
    {
        arr[i] = malloc(cols * sizeof(int)); // free this later
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = count++;
            j == cols - 1 ? printf("%d\n", arr[i][j]) : printf("%d, ", arr[i][j]);
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        free(arr[i]);
    }
    free(arr);
}

void display()
{
    oneDimensional();
    twoDimensional();
    printf("dynamically allocated\t:\t");
    one_d_dynamicArray(10);
    two_d_dynamicArray(3, 3);
}

int main()
{
    display();
    return 0;
}