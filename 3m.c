#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pattern(int n)
{
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2*i - 1); j++)
        {
            if(j <= i)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", --a);
            }
        }
        printf("\n");
    }
    
}

void main(){
    system("cls");
    // printf("Hello world\n");
    pattern(5);
}