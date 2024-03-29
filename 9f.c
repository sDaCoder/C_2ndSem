#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Ackermann(int m, int n) {
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0) 
    {
        return Ackermann(m - 1, 1);
    }
    else
    {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }
}

void main(){
    int m, n;
    scanf("%d %d", &m, &n);
    printf("Ackermann(%d, %d) = %d\n", m, n, Ackermann(m, n));
}