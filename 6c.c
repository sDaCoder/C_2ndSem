#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void createArr(int* arr, int size)
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int* arr, int start, int mid, int end)
{
    int* tArr = (int*)malloc((end-start+1)*sizeof(int));
    int left = start, right = mid + 1, index = 0;
    while ((left<=mid)&&(right<=end))
    {
        if (arr[left] <= arr[right])
        {
            tArr[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            tArr[index] = arr[right];
            index++;
            right++;
        }
    }
    while (left <= mid)
    {
        tArr[index] = arr[left];
        index++;
        left++;
    }
    
    while (right <= end)
    {
        tArr[index] = arr[right];
        index++;
        right++;
    }
    
    for (int i = start; i <= end; i++)
    {
        arr[i] = tArr[i-start];
    }
    free(tArr);
}

void mSort(int* arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start)/2;
        mSort(arr, start, mid);
        mSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void main(){
    int size;
    scanf("%d", &size);
    int* arr = (int*)malloc(size*sizeof(int));
    createArr(arr, size);
    printArr(arr, size);
    mSort(arr, 0, size-1);
    printArr(arr, size);
}