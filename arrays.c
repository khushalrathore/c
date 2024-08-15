#include <stdio.h>
// run this code and see the outputs

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

void display()
{
    oneDimensional();
    twoDimensional();
}

int main()
{
    display();
    return 0;
}