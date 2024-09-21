#include <stdio.h>

int main (){

    int health, mana, gold;
    char class, weapon, spell;

    scanf("%d %d %d", &health, &mana, &gold);
    scanf(" %c", &class);
    scanf(" %c", &weapon);
    scanf(" %c", &spell);

    if (class == 'W') {
        if (health > 70) {
            if (weapon == 'S') {
                gold += 100; 
            } else if (weapon == 'B') {
                health -= 30;  
            } else if (weapon == 'D') {
                health -= 50; 
            }
        } else {
            health = 0;  
        }
    }

    else if (class == 'M'){
        if (mana > 50) {
            if (spell == 'F') {
                gold += 150; 
            } else if (spell == 'I') {
                gold += 120;  // 
            } else if (spell == 'H') {
                health += 40; 
            } else {
                health -= 40; 
            }
        } 
    else {
            health = 0; 
    }
 }

    else if (class == 'R') {
        if (gold > 500) {
            gold -= 500;
        } else if (weapon == 'D' && health > 50) {
            gold += 200;
        } else {
            health = 0;
        }
    }

    
    printf("Status akhir:\nHealth: %d\nMana: %d\nGold: %d\n", health, mana, gold);
    if (health <= 0) {
        printf("Game Over! Anda kalah.\n");
    } 
    else if (gold > 1000) {
        printf("Selamat! Anda menang dengan kekayaan berlimpah!\n");
    } 
    else {
        printf("Anda selamat, tapi petualangan masih berlanjut...\n");
    }
    return 0;
}