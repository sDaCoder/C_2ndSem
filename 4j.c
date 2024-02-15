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
    int arr[] = {100, 200, 300, 400, 500, 600};
    int size = sizeof(arr)/sizeof(int);
    int s_index = 3;
    int* arr1 = (int*)malloc(sizeof(int)*s_index);
    int* arr2 = (int*)malloc(sizeof(int)*(size - s_index - 1));
    // int* arr2;
    for (int i = 0; i < size; i++)
    {
        if (i <= s_index)
        {
            arr1[i] = arr[i];
        }
        else
        {
            arr2[i - s_index - 1] = arr2[i];
        }
    }
    print_arr(arr1, s_index);
    // print_arr(arr2, size-s_index-1);
    
}