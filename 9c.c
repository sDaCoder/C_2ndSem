#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add(int* a, int* b)
{
    return (*a + *b);
}

void main(){
    int a, b;
    scanf("%d %d", &a, &b);    
    printf("The sum of %d and %d is %d", a, b, add(&a, &b));
}