#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib_term(int n)
{
    int prev_num = 0;
    int curr_num = 1;
    int prev_prev;

    if (n == 0)
    {
        return prev_num;
    }
    
    
    for (int i = 1; i < n; i++)
    {
        prev_prev = prev_num;
        prev_num = curr_num;
        curr_num = prev_num + prev_prev;
    }
    return curr_num;
}

void print_fib(int lL, int uL)
{
    int i = 0, term;

    do
    {
        term = fib_term(i);
        i++;

        if (term >= lL && term <= uL)
        {
            printf("%d\n", term);
        }
        
    } while (term <= uL);
    

}

void main(){
    system("cls");
    int lL, uL;
    printf("Enter the lower limit: ");
    scanf("%d", &lL);
    printf("Enter the upper limit: ");
    scanf("%d", &uL);

    print_fib(lL, uL);
}