#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void read_write(FILE* ptr1, FILE* ptr2)
{
    char ch = fgetc(ptr1);
    while (ch != EOF)
    {
        putc(ch, ptr2);
        ch = fgetc(ptr1);
    }
    printf("Reading and Writing Contents is Done!");
}

void main(){
    FILE* ptr1 = fopen("sDa.txt", "r");
    FILE* ptr2 = fopen("sDa2.txt", "w");
    read_write(ptr1, ptr2);
    fclose(ptr1);
    fclose(ptr2);
}