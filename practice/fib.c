#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int fib(int n)
{
    int prev = 0, curr = 1, prev_prev;
    if (n == 0)
    {
        return prev;
    }
    for (int i = 0; i < n; i++)
    {
        prev_prev = prev;
        prev = curr;
        curr = prev + prev_prev;
    }
    return curr;
}

void main(){
    system("cls");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", fib(i));
    }
    
}