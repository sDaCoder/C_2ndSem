#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int leap_check(int n)
{
    if (n%400==0 || (n%4==0 && n%100!=0))
    {
        return 1;
    }
    else return 0;
}

void main(){
    system("cls");
    int year = 2000;
    if(leap_check(year))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}