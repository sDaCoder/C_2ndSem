#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lastDig(int n)
{
    int q = n/10;
    int l = (n - q*10);
    return l;
}

void main(){
    system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The last digit of %d is %d\n", n, lastDig(n));
}