#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reversing(int n)
{
    int rev = 0, rem, isNegative = 0;
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
    return rev;
}

void main(){
    system("cls");
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == reversing(n))
    {
        printf("%d is a palindrome", n);
    }
    else
    {
        printf("%d is not a palindrome", n);
    }

}