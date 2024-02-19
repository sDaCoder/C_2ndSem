#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rev_arr(int arr[], int size)
{
    // int start = 0, end = (size - 1);
    int temp;

    // while (start < end)
    // {
    //     temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    for (int start = 0, end = (size - 1); start < end; start++, end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main(){
    system("cls");
    // printf("Hello world\n");
    int arr[] = {100, 200, 300, 400, 500, 600, 700};
    int size = sizeof(arr)/sizeof(int);
    rev_arr(arr, size);
    display(arr, size);
    
}