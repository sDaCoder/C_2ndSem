#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    char name1[] = "radar";
    char name2[] = "sonar";
    // int tLength = (strlen(name1)+strlen(name2));
    // char* name = (char*)malloc(tLength*sizeof(char));
    
    // for (int i = 0; i < strlen(name1); i++)
    // {
    //     name[i] = name1[i];
    // }
    // for (int i = strlen(name1); i < tLength; i++)
    // {
    //     name[i] = name2[i - strlen(name1)];
    // }
    puts(strcat(name1, name2));
}