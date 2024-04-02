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

int largest(int* arr, int size)
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

int smallest(int* arr, int size)
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

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int* arr, int size)
{
    for (int start = 0, end = (size - 1); start < end; start++, end--)
    {
        swap(&(arr[start]), &(arr[end]));
    }
}

int insertion(int* arr, int size, int capa, int element, int index)
{
    if (size >= capa)
    {
        return -1;
    }
    for (int i = (size - 1); i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

void deletion(int* arr, int size, int index)
{
    for (int i = index; i < (size - 1); i++)
    {
        arr[i] = arr[i+1];
    }
}

int binSearch(int* arr, int size, int element)
{
    int low = 0, high = (size - 1), mid;

    while (low < high)
    {
        mid = (low + high)/2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

void main()
{
    int arr[10] = {23, 45, 46, 59, 67};
    int size = 5, capa = 10;
    printArr(arr, size);
    printf("%d\n", largest(arr, size));
    printf("%d\n", smallest(arr, size));

    printf("%d\n", binSearch(arr, size, 59));

    // reverse(arr, size);

    // insertion(arr, size, capa, 22, 0);
    // printArr(arr, ++size);

    // insertion(arr, size, capa, 21, 4);
    // printArr(arr, ++size);

    // deletion(arr, size, 2);
    // printArr(arr, --size);
}