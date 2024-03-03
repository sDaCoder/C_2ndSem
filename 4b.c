#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void display(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
}

void main(){
    // system("cls");
    int **arr;
    int rows, cols;
    printf("Enter number of rows and cols: ");
    scanf("%d %d", &rows, &cols);
    // printf("Enter number of columns: ");
    // scanf("%d", &cols);

    arr = (int**)malloc(rows*sizeof(int*));
    
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int*)malloc(cols*sizeof(int));
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element of index [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr, rows, cols);
}