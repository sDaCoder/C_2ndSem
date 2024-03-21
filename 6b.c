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

void iSort(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(&(arr[j]), &(arr[j-1]));
            }
            else break;
        }
    }
}

void main(){
    int size;
    scanf("%d", &size);
    int* arr = (int*)malloc(size*sizeof(int));
    createArr(arr, size);
    printArr(arr, size);
    iSort(arr, size);
    printArr(arr, size);
}