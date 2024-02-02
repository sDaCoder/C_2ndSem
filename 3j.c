#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pattern(int n)
{
    int a = 65;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                printf("%c", a);
                a = a + 2;
            }
        }
        a = 65;
        printf("\n");
    }
}

void main(){
    system("cls");
    pattern(5);
    // printf("Hello world\n");
}