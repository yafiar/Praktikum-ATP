//KEMAS - Tidur saat El Kalkulus
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, z;  
    scanf("%d %d %d %d", &a, &b, &c, &d);
    z = a*d-b*c;
    printf("%d", z);
    return 0;
}

//Karinaisme
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

// Langkah Pertama Kavi
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

//Six-winters of Enigma
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
