#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void iSort(int* arr, int size)
{
    for (int j = 1; j < size; j++)
    {
        for (int i = j; i > 0; i--)
        {
            if (arr[i] > arr[i-1])
            {
                swap(arr+i, arr+i-1);
            }
            else
            {
                break;
            }
            
        }
        
    }
}

void bSort(int* arr, int size)
{
    for (int i = size-2; i >= 0; i--)
    {
        int swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr+j, arr+j+1);
                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
}

void main(){
    system("cls");
    int arr[] = {5, 4, 1, 3, 6, 3};
    int size = sizeof(arr)/sizeof(int);
    printArr(arr, size);
    bSort(arr, size);   
    printArr(arr, size);
}