#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    FILE *file;
    char subject[50];
    int marks, count = 0, total = 0;

    file = fopen("report.txt", "r");

    // while (fscanf(file, "%[^:]:%d", subject, &marks) == 2) {
    while (fscanf(file, "%[^->]->%d", subject, &marks) == 2) {
        total += marks;
        count++;
    }

    fclose(file);

    printf("Average marks: %.2f\n", (float)total/count);
}