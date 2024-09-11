#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, x;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = (int) (pow(c,d)/sqrt(a))%b;
    printf("%d Persen", x);
    
return 0;
}