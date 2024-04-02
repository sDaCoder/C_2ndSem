#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

void sSort(int* arr, int size)
{
    int index;
    for (int i = 0; i < size - 1; i++)
    {
        index = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        swap(&(arr[index]), arr+i);
    }
    
}

void bSort(int* arr, int size)
{
    int swapped = 0;
    for (int i = size-2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(arr+j, arr+j+1);
                swapped = 1;
            }
            if (!swapped)
            {
                break;
            }
        }
    }
}

void iSort(int* arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j-1])
            {
                swap(arr+j, arr+j-1);
            }
            else break;
        }
    }
}

void main(){
    int arr[] = {23, 46, 45, 67, 59};
    int size = sizeof(arr)/sizeof(int);
    printArr(arr, size);
    // sSort(arr, size);
    // bSort(arr, size);
    iSort(arr, size);
    printArr(arr, size);
}