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

int exchange(int n)
{
    int last1, last2;

    last1 = lastDig(n);
    n = deletion(n);
    
    last2 = lastDig(n);
    n = deletion(n);

    n = n*10 + last1;
    n = n*10 + last2;
    return n;
}

void main(){
    system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The number formed after exchanging the digits of %d is %d\n", n, exchange(n));
}