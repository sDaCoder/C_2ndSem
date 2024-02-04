#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(int n)
{
    if (n == 0 || n == 1)
    {
        return -1; //! 1 is neither prime nor composite
    }
    
    else
    {
        int isPrime = 1;
        for (int i = 2; i*i <= n; i++)
        {
            // printf("Checking for %d\n", i);
            if (n%i == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime == 1)
        {
            return 1;
        }
        else return 0;
    }
}

void print_prime(int lL, int uL)
{
    for (int i = lL; i <= uL; i++)
    {
        if (check(i))
        {
            printf("%d\n", i);
        }
        
    }
    
}

void main(){
    system("cls");
    int lL, uL;
    printf("Enter the lower limit: ");
    scanf("%d", &lL);
    printf("Enter the upper limit: ");
    scanf("%d", &uL);

    print_prime(lL, uL);
}