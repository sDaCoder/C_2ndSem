#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
            printf("* ");
        }
        printf("\n");
    }
    
}

void main(){
    system("cls");
    pattern(5);
    
}