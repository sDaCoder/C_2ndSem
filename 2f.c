#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    int valid;
    do
    {
        valid = 1;
        int marks;
        printf("Enter marks within 0 to 100: ");
        scanf("%d", &marks);
        if (marks > 90 && marks <= 100)
        {
            printf("Outstanding");
        }
        else if (marks > 60 && marks <= 90)
        {
            printf("Good");
        }
        else if (marks > 40 && marks <= 60)
        {
            printf("Average");
        }
        else if (marks > 0 && marks <= 40)
        {
            printf("Fail");
        }
        else
        {
            valid = 0;
            printf("Invalid Input.\n");
        }
        
    } while (valid == 0);
}