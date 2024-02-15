#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void search(int* arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("%d is present in the array\n", element);
            return;
        }
    }
    printf("%d is not present in the array\n", element);
}

void main(){
    system("cls");
    int arr1[] = {10, 20, 30, 40, 50, 20};
    int size1 = sizeof(arr1)/sizeof(int);
    int element;
    printf("Enter any number: ");
    scanf("%d", &element);

    search(arr1, size1, element);
}