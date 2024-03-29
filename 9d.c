#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void createArr(int size, int* arr)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }
}

void printArr(int size, int* arr)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", *(arr + i));
    }
}

void main(){
    int size;
    scanf("%d", &size);
    int* arr = (int*)calloc(size, sizeof(int));
    createArr(size, arr);
    printArr(size, arr);
    free(arr);
}