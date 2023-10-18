/*
Exercise 5: Write a C program uses pointer to input matrix has n rows and m columns
from the keyboard then do following tasks:
	- Display given matrix to the screen.
	- Calculate total of all element in even row. Display result to the screen.
	- Sort all columns descending. Display matrix after sorting to the screen.
*/
#include <stdio.h>
#include <stdlib.h>

void display_matrix(int *matrix, int n, int m);
int sum_even_rows(int *matrix, int n, int m);
void sort_columns(int *matrix, int n, int m);

int main()
{	
	//n: row, m: column
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int *matrix = (int *)malloc(n * m * sizeof(int));

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {	printf("\nInput arr[%d][%d]: ",i+1,j+1);
            scanf("%d", (matrix + i * m + j));
        }
    }

    printf("\nMatrix:\n");
    display_matrix(matrix, n, m);

    printf("\nTotal of all elements in even rows: %d\n", sum_even_rows(matrix, n, m));

    sort_columns(matrix, n, m);
    printf("\nMatrix after sorting columns in descending order:\n");
    display_matrix(matrix, n, m);

    free(matrix);
    return 0;
}

void display_matrix(int *matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", *(matrix + i * m + j));
        }
        printf("\n");
    }
}

int sum_even_rows(int *matrix, int n, int m)
{
    int sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            sum += *(matrix + i * m + j);
        }
    }
    return sum;
}

void sort_columns(int *matrix, int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (*(matrix + k * m + j) > *(matrix + i * m + j))
                {
                    int temp = *(matrix + k * m + j);
                    *(matrix + k * m + j) = *(matrix + i * m + j);
                    *(matrix + i * m + j) = temp;
                }
            }
        }
    }
}
