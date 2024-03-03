#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int search(int* arr, int size, int element)
{
    int count = 0; 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    return count;
}

void main(){
    system("cls");
    int arr[] = {10, 20, 30, 50, 100, 40, 50, 20};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("Enter any element: ");
    scanf("%d", &element);

    if (search(arr, size, element))
    {
        printf("%d is present in the array %d time(s)", element, search(arr, size, element));
    }
    else
    {
        printf("%d is not present in the array", element);
    }
    
}