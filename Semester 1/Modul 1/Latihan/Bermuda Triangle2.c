#include <stdio.h>
#include <math.h>


int hitungJarak(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int xa, ya, xb, yb, xc, yc;
    
    scanf("%d %d", &xa, &ya);
    scanf("%d %d", &xb, &yb);
    scanf("%d %d", &xc, &yc);
    

    int AB = hitungJarak(xa, ya, xb, yb);
    int BC = hitungJarak(xb, yb, xc, yc);
    int AC = hitungJarak(xa, ya, xc, yc);
    

    if (fabs(AB - BC) < 1e-9 && fabs(BC - AC) < 1e-9) {
        printf("segitiga sama sisi\n");
    }

    else if (fabs(AB - BC) < 1e-9 || fabs(BC - AC) < 1e-9 || fabs(AB - AC) < 1e-9) {
       
        if (fabs(AB * AB + BC * BC - AC * AC) < 1e-9 || 
            fabs(AB * AB + AC * AC - BC * BC) < 1e-9 || 
            fabs(BC * BC + AC * AC - AB * AB) < 1e-9) {
            printf("segitiga siku siku sama kaki\n");
        } else {
            printf("segitiga sama kaki\n");
        }
    }

    else if (fabs(AB * AB + BC * BC - AC * AC) < 1e-9 || 
             fabs(AB * AB + AC * AC - BC * BC) < 1e-9 || 
             fabs(BC * BC + AC * AC - AB * AB) < 1e-9) {
        printf("segitiga siku siku sembarang\n");
    }

    else {
        printf("segitiga sembarang\n");
    }

    return 0;
}
