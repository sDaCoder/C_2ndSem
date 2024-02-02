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

int exchange_pro(int n1, int n2)
{
    int last1, last2;

    last1 = lastDig(n1);
    n1 = deletion(n1);
    
    last2 = lastDig(n2);
    n2 = deletion(n2);

    n2 = n2*10 + last1;
    n1 = n1*10 + last2;
    // printf("The number formed after exchanging the digits are %d and %d\n", n1, n2);
    return (n1*n2);
}

void main(){
    system("cls");
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("The product of %d and %d after exchanging their last digits is: %d", n1, n2, exchange_pro(n1, n2));
}