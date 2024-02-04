#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    int n, org_num;
    printf("Enter a number: ");
    scanf("%d", &n);
    org_num = n;
    int rem, sum = 0;
    do
    {
        rem = n%10;
        n = n/10;
        sum = sum + rem;
    } while (n != 0);
    
    printf("The sum of all the digits of %d is %d.\n", org_num, sum);
}