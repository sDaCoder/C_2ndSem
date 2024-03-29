#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The value of 'a' and 'b' before swapping: %d %d\n", a, b);
    swap(&a, &b);
    printf("The value of 'a' and 'b' after swapping: %d %d\n", a, b);
}