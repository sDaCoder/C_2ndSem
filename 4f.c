#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int print_large(int* arr, int size)
{
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[index] < arr[i])
        {
            index = i;
        }
        
    }
    return arr[index];
}

int print_small(int* arr, int size)
{
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[index] > arr[i])
        {
            index = i;
        }
        
    }
    return arr[index];
}

void main(){
    system("cls");
    int arr[] = {100, 300, 400, 500, 600};
    int size = sizeof(arr)/sizeof(int);
    printf("The largest element of the array is: %d\n", print_large(arr, size));
    printf("The smallest element of the array is: %d\n", print_small(arr, size));
}