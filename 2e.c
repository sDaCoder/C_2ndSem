#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    // printf("Hello world\n");
    int n;
    printf("Enter any year: ");
    scanf("%d", &n);

    if (n%4 == 0)
    {
        printf("%d is a Leap Year", n);
    }
    else
    {
        printf("%d is not a Leap Year", n);
        
    }
    
}