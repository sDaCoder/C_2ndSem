#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

void readFile(FILE* ptr, char str[])
{
    char c = fgetc(ptr);
    int i = 0;
    while (c != EOF)
    {
        str[i] = c;
        c = fgetc(ptr);
        i++;
    }
    str[i] = '\0';
}

void main(){
    system("cls");
    // char str[] = "l1\nl2\nl3\nl4\nl5";
    char str[100];
    char* lines[20];

    FILE* ptr = fopen("lines.txt", "r");
    readFile(ptr, str);
    fclose(ptr);

    int i = 0;
    lines[i] = strtok(str, "\n");
    while (lines[i] != NULL)
    {
        // i++;
        lines[++i] = strtok(NULL, "\n");    
    }
    
    FILE* ptr1 = fopen("lines1.txt", "w");
    int j = i - 1;
    for (j = i-1; j >= 0; j--)
    {
        int k = 0;
        while (lines[j][k] != '\0')
        {
            putc(lines[j][k], ptr1);
            k++;    
        }
        if (j == 0)
        {
            break;
        }
        putc('\n', ptr1);
    }
    fclose(ptr1);
    printf("Writing in the file is complete");
}