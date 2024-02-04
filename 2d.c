#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    // printf("Hello world\n");
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("%d is an Even Number", n);
    }
    else
    {
        printf("%d is an Odd Number", n);
        
    }
    
}