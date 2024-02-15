#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int freq(int arr[], int size, int element)
{
    int f = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            f++;
        }
    }
    return f;
}

void main(){
    system("cls");
    int size = 10;
    int arr[] = {1, 2, 2, 3, 3, 3, 4 , 6, 7, 7};
    int element = 6;
    
    if (freq(arr, size, element) == 0)
    {
        printf("%d cannot be found in this array.", element);
    }
    else
    {
        printf("The frequency of %d in the array is %d\n", element, freq(arr, size, element));
    }
}