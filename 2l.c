#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int facto(int n)
{
    int pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro = pro*(i+1);
    }
    return pro;
}

void main(){
    system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d.\n", n, facto(n));
}