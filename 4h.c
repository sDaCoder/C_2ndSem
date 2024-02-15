#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sorting(int* arr, int size)
{
    int index;
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        index = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
            
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    display(arr, size);
}

void main(){
    system("cls");
    int arr[] = {100, 900, 400, 400, 200, 600, 700, 700, 300, 400, 500};
    int size = sizeof(arr)/sizeof(int);
    sorting(arr, size);
}