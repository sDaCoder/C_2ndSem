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
    system("cls");
    int size = 6;
    int arr1[6] = {100, 200, 300, 400, 500, 600};
    int arr2[6];
    for (int i = 0; i < 6; i++)
    {
        arr2[i] = arr1[i];
    }
    print_arr(arr2, size);
}