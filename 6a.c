#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void createArr(int* arr, int size)
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

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

void bSort(int* arr, int size)
{
    int swapped = 0;
    for (int i = (size - 2); i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&(arr[j]), &(arr[j+1]));
                swapped = 1;
            }
            if (swapped == 0) break; 
        }
    }
}

void main(){
    int size;
    scanf("%d", &size);
    int* arr = (int*)malloc(size*sizeof(int));
    createArr(arr, size);
    printArr(arr, size);
    bSort(arr, size);
    printArr(arr, size);
}