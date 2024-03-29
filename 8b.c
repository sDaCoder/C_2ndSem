#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    float marks;
};

void createArr(int size, struct Student* s)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the marks of the student: ");
        scanf(" %f", &(s[i].marks));
        printf("Enter the name of the student: ");
        scanf(" %s", s[i].name);   
    }
}

void printArr(int size, struct Student* s)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s: %.2f\n", s[i].name, s[i].marks);
    }
}

void main(){
    int size;
    printf("Enter the size of the student Array: ");
    scanf("%d", &size);
    struct Student* s = (struct Student*) malloc(size*sizeof(struct Student));
    createArr(size, s);
    printArr(size, s);
    free(s);
}