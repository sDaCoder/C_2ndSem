#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int parr[3][3];

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