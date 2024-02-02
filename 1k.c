#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float CtoF(float C)
{
    return (9.0/5*C + 32);
}

float FtoC(float F)
{
    return ((F-32)*5.0/9);
}

void main(){
    system("cls");
    // printf("Hello world\n");
    float temp;
    char scale;
    int valid;
    do
    {
        printf("Enter temperature followed by its scale (C/F): ");
        scanf("%f %c", &temp, &scale);
        valid = 1;
        switch (scale)
        {
        case 'F':
        case 'f':
            printf("The corresponding temperature in Celcius is %.2f C", FtoC(temp));
            break;
        
        case 'C':
        case 'c':
            printf("The corresponding temperature in Farenheit is %.2f F", CtoF(temp));
            break;
        
        default:
            printf("Invalid scale.\n");
            valid = 0;
        }
    } while (valid != 1);
    
}