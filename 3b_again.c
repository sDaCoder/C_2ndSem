#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printStr()
{
    static int n = 1;
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    n++;
}

void main(){
    system("cls");
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printStr();
    }
    
}