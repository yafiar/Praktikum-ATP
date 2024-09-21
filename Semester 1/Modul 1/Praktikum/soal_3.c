#include <stdio.h>

main (){

    int S, M, L, T, E, R;
    float B;

    scanf("%d, %f, %d, %d, %d, %d", &S, &B, &M, &L, &T);

    int SyaratS = 0;
    int SyaratB = 0;
    int SyaratM = 0;
    int SyaratL = 0;
    int SyaratT = 0;

    if (S >= 1 && S <= 100)
        SyaratS = 1;
    if (B >= 0.1 && B <= 1)
        SyaratB = 1;
    if (M >= 0 && M <= 100)
        SyaratM = 1;
    if (L >= 0 && L <= 500)
        SyaratL = 1;
    if (T >= 0 && T <= 100)
        SyaratT = 1;

    E = ((B*M)+L)/100;
    R = ((B*M)/(S*2));

    printf ("E = %d, R = %d", E, R);

    return 0;
}