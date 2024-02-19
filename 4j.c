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
    
    int arr[] = {100, 200, 300, 400, 500, 600};
    int size = sizeof(arr)/sizeof(int);
    
    int s_index;
    printf("Enter the index in which you want to split: ");
    scanf("%d", &s_index);

    int* arr1 = (int*)malloc(sizeof(int)*s_index);
    int* arr2 = (int*)malloc(sizeof(int)*(size - s_index));

    for (int i = 0; i < s_index; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < (size - s_index); i++)
    {
        arr2[i] = arr[i + s_index];
    }
    
    print_arr(arr1, s_index);
    printf("\n");
    print_arr(arr2, size-s_index);
    
}