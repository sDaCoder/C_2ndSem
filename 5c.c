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
    char name[] = "radar";
    int isPalindrome = 1;
    
    for (int start = 0, end = (strlen(name) - 1); start < end; start++, end--)
    {
        if (name[start] != name[end])
        {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome)
    {
        printf("%s is a Palindrome", name);
    }
    else
    {
        printf("%s is not a Palindrome", name);
        
    }
    
    
}