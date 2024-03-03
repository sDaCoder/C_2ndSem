#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("The entered name is %s", name);
}