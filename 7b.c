#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int power(int x, int y)
{
    if (y==0 || y==1)
    {
        return x;
    }
    else
    {
        return x*power(x, y-1);
    }
    
}

void main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d ^ %d = %d", x, y, power(x, y));
}