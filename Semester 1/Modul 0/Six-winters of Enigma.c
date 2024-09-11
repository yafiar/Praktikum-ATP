#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char A, B, C, D, E, F;
    scanf ("%c %c %c %c %c %c", &A, &B, &C, &D, &E, &F);
    int result = ~(((int)A & (int)B | (int)C) << (int)E >> (int)F) + (int)D; 
    
    printf("%d", result);
    return 0;
}
