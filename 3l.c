#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == j)||((i + j) == (n+1)))
            {
                printf("1");
            }
            else printf("0");
        }
        printf("\n");
    }
    
}

void main(){
    system("cls");
    // printf("Hello world\n");
    pattern(5);
}