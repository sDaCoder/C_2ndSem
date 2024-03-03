#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* reverse(char str[])
{
    char temp;
    for (int start = 0, end = strlen(str) - 1; start < end; start++, end--)
    {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
    }
    return str;
}

void main(){
    system("cls");
    char name[] = "Suprava";
    puts(reverse(name));

}