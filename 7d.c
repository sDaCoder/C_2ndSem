#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int HCF(int a, int b)
{
    int n1 = a, n2 = b, rem;
    if(n2 != 0)
    {
        rem = n1%n2;
        return HCF(n2, rem);
    }
    else
    {
        return a;
    }
    
}

int LCM(int a, int b)
{
    return (a*b)/HCF(a, b);
}

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The HCF of %d and %d is %d\n", a, b, HCF(a, b));
    printf("The LCM of %d and %d is %d\n", a, b, LCM(a, b));
}