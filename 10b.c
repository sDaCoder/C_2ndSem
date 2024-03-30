#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lines(FILE* fp)
{
    char c = fgetc(fp);
    int lines = 1;
    while (c != EOF)
    {
        if (c == '\n')
        {
            lines++;
        }
    }
    return lines;
}

void main(){
    FILE* fp = fopen("report.txt", "r");
    char c = fgetc(fp);
    while (c != EOF)
    {
        int num = 0;
        if (c>='0' && c<='9')
        {
            int n = c - '0';
            num = num*10 + n;
            printf("%d\n", num);
        }
        else if (c == '\n')
        {
            printf("\n");
        }
        c = fgetc(fp);
    }
    fclose(fp);
}