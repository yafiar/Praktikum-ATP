#include <stdio.h>

int main() {
    char A, B, C, D, E, F, G, H;
    int aman = 1; 

    
    scanf("%s %s %s %s %s %s %s %s", &A, &B, &C, &D, &E, &F, &G, &H);

    if ((A >= 'a' && A <= 'z') || (A >= 'A' && A <= 'Z')) 
        aman = 1;
    
    if ((B >= 'a' && B <= 'z') || (B >= 'A' && B <= 'Z'))
        aman = 1;
    if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z'))
        aman = 1;
    if ((D >= 'a' && D <= 'z') || (D >= 'A' && D <= 'Z'))
        aman = 1;

    
    if (E >= '0' && E <= '9')
        aman = 1;
    if (F >= '0' && F <= '9')
        aman = 1;

    if (G != '!' && G != '@' && G != '#' && G != '$')
        aman = 0;
    if (H != '!' && H != '@' && H != '#' && H != '$')
        aman = 0;

    if (aman == 1) {
        printf("Password sudah aman.\n");
    } else {
        printf("Password masih belum aman.\n");
    }

    return 0;
}
