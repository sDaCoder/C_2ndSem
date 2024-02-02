#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i <= j)
            {
                printf("*");
            }            
        }
        printf("\n");
    }
    
}