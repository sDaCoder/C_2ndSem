#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int facto(int n)
{
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        f = f*(i+1);
    }
    return f;
}

int nCr(int n, int r)
{
    return facto(n)/(facto(r)*facto(n-r));
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        // int a = (n - i) + 64;
        // int b = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", nCr(i-1, j-1));
        }
        printf("\n");
    }
}

void main(){
    system("cls");
    int lines = 6;
    pattern(lines);
}