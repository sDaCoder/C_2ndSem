#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    float marks;
};

void storeData(struct Student* s)
{
    printf("Enter the marks of the student: ");
    scanf(" %f", &(s->marks));
    printf("Enter the name of the student: ");
    scanf(" %s", (s->name));
}

void main(){
    struct Student s;
    storeData(&s);
    printf("%s: %.2f", s.name, s.marks);
}