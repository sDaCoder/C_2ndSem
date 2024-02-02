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
    int n, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = lastDig(n);
    n = deletion(n);
    n = (n*10 + 2*last);
    printf("%d", n);
}