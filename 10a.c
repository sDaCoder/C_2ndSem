#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    FILE* fp;
    fp = fopen("sDa.txt", "r");
    char c = fgetc(fp);
    while (c != EOF)
    {
        putchar(c);
        c = fgetc(fp);
    }
    fclose(fp);
}