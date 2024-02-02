#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int deletion(int n)
{
    n = n/10;
    return n;
}
void main(){
    // system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n = deletion(n);
    n = deletion(n);
    printf("After deletion, the number becomes %d\n", n);
}