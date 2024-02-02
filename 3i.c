#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pattern(int n)
{
    int a;
    for(int i = 1; i <= n; i++)
    {
        a = i + 64;
        for(int j = 1; j <= i; j++)
        {
            printf("%c", a++);
        }
        printf("\n");
    }
}

void main(){
    system("cls");
    // printf("Hello world\n");
    pattern(5);
}