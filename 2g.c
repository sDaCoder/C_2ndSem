#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    
    int rev = 0, rem, isNegative = 0;
    int n, org_num;
    printf("Enter a number: ");
    scanf("%d", &n);
    org_num = n;

    if (n < 0)
    {
        isNegative = 1;
        n = -n;
    }
    
    do
    {
        rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    } while (n != 0);

    if (isNegative)
    {
        rev = -rev;
    }
    
    printf("The reverse of %d is %d", org_num, rev);
}