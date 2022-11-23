/**
 * @author: Markus Konietzka
 * @date: 23.11.2022
 */

#include<stdio.h>

int main() {
    long kontoNr = 0;
    int kundenNr = 0;

    printf("Bitte Kontonummer und (mit Komma getrennt)\nIhre Kundennummer eingeben.\n-->");
    scanf("%ld,%d", &kontoNr, &kundenNr);
    printf("Ihre Kontonummer: %010ld\nIhre Kundennummer: %9d\n", kontoNr, kundenNr);
}