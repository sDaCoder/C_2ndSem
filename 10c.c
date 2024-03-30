#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void writeFile(FILE* ptr, char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        putc(str[i], ptr);
    }
    printf("Writing Contents done!");
}

void main(){
    char str[50];
    printf("Enter some contents: ");
    gets(str);
    FILE* ptr = fopen("sDa.txt", "w");
    writeFile(ptr, str);
    fclose(ptr);
}