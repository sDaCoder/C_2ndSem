#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digits(int n)
{
    int num = n, count = 0;
    while (num != 0)
    {
        num = num/10;
        count++;
    }
    return count;
}

int armCheck(int n)
{
    int num = n, rem, armNum = 0;
    while (num != 0)
    {
        rem = num%10;
        num = num/10;
        armNum = armNum + round(pow(rem, digits(n)));
    }
    if (armNum == n)
    {
        return 1;
    }
    else return 0;
}

void main(){
    int n;
    scanf("%d", &n);
    if (armCheck(n))
    {
        printf("%d is a Armstrong Number", n);
    }
    else
    {
        printf("%d is not a Armstrong Number", n);
    }
    
}