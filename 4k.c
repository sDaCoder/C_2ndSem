#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    
}

void main(){
    system("cls");
    // printf("Hello world\n");
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1)/sizeof(int);

    int arr2[] = {100, 200, 300, 400, 500, 600, 700};
    int size2 = sizeof(arr2)/sizeof(int);

    int *arr = (int*)malloc((size1 + size2)*sizeof(int));

    for (int i = 0; i < (size1 + size2); i++)
    {
        if (i < size1)
        {
            arr[i] = arr1[i];
        }
        else
        {
            arr[i] = arr2[i - size1];
        }
        
    }
    print_arr(arr, size1+size2);
}