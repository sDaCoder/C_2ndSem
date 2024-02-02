#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pattern(int n)
{
    for(int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (2*i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    system("cls");
    // printf("Hello world\n");
    pattern(4);
}