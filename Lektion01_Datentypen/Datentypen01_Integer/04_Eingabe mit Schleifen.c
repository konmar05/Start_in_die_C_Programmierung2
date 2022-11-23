/**
 * @author: Markus Konietzka
 * @date: 23.11.2022
 */

#include<stdio.h>

int main() {
    int a, b, c, count;
    do {
        fflush(stdin);
        printf("Bitte drei Zahlen eingeben!\n");
        count = scanf("%d, %d, %d", &a, &b, &c);
    } while(count != 3);
}