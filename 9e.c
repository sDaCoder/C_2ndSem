#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int facto(int* n)
{
    int f = 1;
    for (int i = 1; i <= *n; i++)
    {
        f = f*i;
    }
    return f;
}

void main(){
    int n;
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, facto(&n));
}