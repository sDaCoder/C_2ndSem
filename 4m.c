#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_odd(int arr[], int size)
{
    printf("Printing the odd elements of the array:\n");
    for (int i = 0; i < size; i+=2)
    {
        printf("%d ", arr[i]);
    }
}

void print_even(int arr[], int size)
{
    printf("Printing the even elements of the array:\n");
    for (int i = 1; i < size; i+=2)
    {
        printf("%d ", arr[i]);
    }
}
    

void main(){
    system("cls");
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1)/sizeof(int);
    print_odd(arr1, size1);
    printf("\n");
    print_even(arr1, size1);
}