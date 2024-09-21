#include <stdio.h>

int main(){

    int N, A, B, C;
    scanf("%d %d %d %d", &N, &A, &B, &C);

    int syarat1 = 0;
    int syarat2 = 0;

    if (N%A == 0 && N%B != 0){
    syarat1 = 1;
    }
    if (N%C == 0 && N%2 != 0){
        syarat2 = 1;
    }

    if (syarat1 && syarat2){
        printf("You got a lucky number!\n%d fits both condition", N);
    }
    else if (syarat1){
        printf("You got a lucky number!\n%d fits the first condition", N);
    }
    else if (syarat2){
        printf("You got a lucky number!\n%d fits the second condition", N);
    }
    else {printf ("Sorry, %d is not a lucky number :(", N);
    }

    return 0;
}
