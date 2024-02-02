#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("The sum of %.2f and %.2f is %.2f", a, b, (a + b));
}