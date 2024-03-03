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
            if (arr[j] < arr[index])
            {
                index = j;
            }
            
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}

int binSearch(int* arr, int size, int element)
{
    int low = 0, high = (size - 1);
    int mid;
    int count = 0;

    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = (mid + 1);
        }
        else
        {
            high = (mid - 1);
        }
        
    }
    return 0;
    
}

void main(){
    system("cls");
    int arr[] = {10, 20, 70, 90, 30, 50, 100, 40};
    int size = sizeof(arr)/sizeof(int); 
    sorting(arr, size);   

    int element;
    printf("Enter any element: ");
    scanf("%d", &element);
    
    if (binSearch(arr, size, element))
    {
        printf("%d is present at the index %d", element, binSearch(arr, size, element));
    }
    else
    {
        printf("%d is not present in the array", element);
    }
    
}