#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    // printf("Hello world\n");
    int n = 5;
    for (int i = n; i >= n; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
    
}