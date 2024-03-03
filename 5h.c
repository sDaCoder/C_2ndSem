#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int vowels(char str[])
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

void main(){
    system("cls");
    char name[] = "Suprava";
    
    printf("The total vowels present in the string '%s' is: %d", name, vowels(name));
}