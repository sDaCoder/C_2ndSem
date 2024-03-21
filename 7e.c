#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return (fib(n-1) + fib(n-2));
    }
    
}

void main(){
    int lL, uL;
    scanf("%d %d", &lL, &uL);
    for (int i = lL; i <= uL; i++)
    {
        printf("%d ", fib(i));
    }
    
}