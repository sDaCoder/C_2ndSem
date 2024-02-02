#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lastDig(int n)
{
    return (n%10);
}

int deletion(int n)
{
    n = n/10;
    return n;
}

void main(){
    system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The last digit of %d is %d\n", n, lastDig(n));
    printf("After deletion of the last digit, the number is %d\n", deletion(n));
}