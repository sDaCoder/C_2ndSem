#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main(){
    system("cls");
    // printf("Hello world\n");
    int a, b, c;
    float s, area;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    s = (a + b + c)/2;
    area = sqrt(s * (s - a) * (s - b) * (s -c));
    printf("%f", area);
    
}