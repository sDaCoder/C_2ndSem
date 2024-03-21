#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int facto(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    return f;
}

int factoR(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else return n*factoR(n-1);
}

void main(){
    int n;
    scanf("%d", &n);
    printf("The Factorial of %d is %d\n", n, facto(n));
    printf("Using Recursion, the Factorial of %d is %d\n", n, factoR(n));
}