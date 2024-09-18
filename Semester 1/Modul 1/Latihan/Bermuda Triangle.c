#include <stdio.h>
#include <math.h>

#define EPSILON 1e-9

int main(){

    int x1, x2, x3, y1, y2, y3;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    float d1, d2, d3;
    d1 = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    d2 = sqrt(pow(x2-x3, 2)+pow(y2-y3, 2));
    d3 = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));

    if (d1==d2 && d2==d3)    {
        printf("segitiga sama sisi \n");
    }
    
    else if(d1==d2 || d2==d3 || d3==d1) {
        printf("segitiga sama kaki \n");
    }
    
    else if (fabs(d1 + d2 - d3) < 1e-9 || fabs(d1 + d3 - d2) < 1e-9 || fabs(d2 + d3 - d1) < 1e-9) {
        printf("segitiga siku siku sama kaki \n");
    } 
    
    else if (fabs(d1*d1 + d2*d2 - d3*d3) < 1e-9 || fabs(d1*d1 + d3*d3 - d2*d2) < 1e-9 || fabs(d2*d2 + d3*d3 - d1*d1) < 1e-9) {
        printf("segitiga siku siku sembarang \n");
    } 

    else {
        printf("segitiga sembarang");
    }

    return 0;
}
