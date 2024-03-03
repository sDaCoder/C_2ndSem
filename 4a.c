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
    int *arr;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of the element of index %d: ", i);
        scanf("%d", &arr[i]);
    }
    print_arr(arr, size);
}