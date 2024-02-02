#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int nCr(int n, int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", nCr(i-1, j-1));
        }
        printf("\n");
    }
    
}

void main(){
    system("cls");
    // printf("Hello world\n");
    pattern(5);
}