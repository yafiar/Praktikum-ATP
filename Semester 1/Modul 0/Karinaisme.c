#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, x;
    
    scanf("%d", &N);
    x = N % 7;
    
    (x==3 && N>20 && N>=0 && N<=100 ) ? printf("Sususususupernova") : printf("Dramamamama");

    return 0;
}