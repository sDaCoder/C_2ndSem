#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    int a = 2, b = 4, choice, valid;

    do
    {
        valid = 1;
        printf("Enter 0 for using third variable, 1 for not using third variable: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 0:
                printf("Before swapping: a = %d, b = %d\n", a, b);
                int t;
                t = a;
                a = b;
                b = t;
                printf("After swapping: a = %d, b = %d\n", a, b);
                break;

            case 1:
                printf("Before swapping: a = %d, b = %d\n", a, b);
                a = a + b;
                b = a - b;
                a = a - b;
                printf("After swapping: a = %d, b = %d\n", a, b);
                break;

            default:
                valid = 0;
                printf("Invalid Option.\n");
        }
    } while (valid == 0);
    

    // printf("Hello world\n");
}