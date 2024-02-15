#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void create_arr(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of index [%d][%d] for 1st matrix: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");   
}

void main(){
    system("cls");
    int arr1[3][3], arr2[3][3], sarr[3][3], parr[3][3];

    create_arr(arr1);
    printf("\n");
    create_arr(arr2);

    display(arr1);
    display(arr2);

    // Performing matrix addition
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sarr[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }
    display(sarr);

    // Performing matrix multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            parr[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                parr[i][j] += arr1[i][k] + arr2[k][j];
            }
        }
    }
    display(parr);

}