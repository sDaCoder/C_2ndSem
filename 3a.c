#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}