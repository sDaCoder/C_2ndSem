#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    char name[] = "radar";
    char* copy_str = (char*)malloc(strlen(name)*sizeof(char));

    for (int i = 0; i < strlen(name); i++)
    {
        copy_str[i] = name[i];
    }
    puts(copy_str);
    
}