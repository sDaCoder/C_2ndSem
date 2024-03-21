#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int a, int b, int c)
{
    return (a+b+c);
}

void main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", sum(a, b, c));
}