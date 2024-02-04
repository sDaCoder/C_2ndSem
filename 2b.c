#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void main(){
    system("cls");
    // printf("Hello world\n");
    int x1, y1, x2, y2;
    float dist;
    printf("Enter the co-ordinates of the first point separated by a comma and a space: ");
    scanf("%d, %d", &x1, &y1);
    printf("Enter the co-ordinates of the first point separated by a comma and a space: ");
    scanf("%d, %d", &x2, &y2);
    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between the two points is: %f", dist);
}