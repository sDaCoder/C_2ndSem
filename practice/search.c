#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int binSearch(int* arr, int size, int element)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = (start + end)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

void main(){
    system("cls");
    int arr[] = {200, 300, 400, 800, 1000};
    int size = sizeof(arr)/sizeof(int);
    printf("%d", binSearch(arr, size, 800));
}