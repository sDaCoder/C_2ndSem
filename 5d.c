#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int length_str(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void main(){
    system("cls");
    char name[] = "radar";
    printf("The length of the string '%s' is: %d", name, length_str(name));
    
}