#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    // printf("Hello world\n");
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    if (a*a + b*b == c*c)
    {
        printf("Angle A is a Right Angle");
    }
    else{
        printf("Angle A is not a Right Angle");

    }
    
}