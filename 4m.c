#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_odd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == (2*i))
            {
                printf("%d\t", arr[j]);
            }
            
        }
        
    }
}
    

void main(){
    system("cls");
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1)/sizeof(int);
    // printf("Hello world\n");
    print_odd(arr1, size1);
}