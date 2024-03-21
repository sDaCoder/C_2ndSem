#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int facto(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    return f;
}

int petCheck(int n)
{
    int num = n, rem, petNum = 0;
    while (num != 0)
    {
        rem = num%10;
        num = num/10;
        petNum = petNum + facto(rem);
    }
    if (petNum == n)
    {
        return 1;
    }
    else return 0;
}

void main(){
    int n;
    scanf("%d", &n);
    if (petCheck(n))
    {
        printf("%d is a Peterson Number", n);
    }
    else
    {
        printf("%d is not a Peterson Number", n);
    }
    
}