/**
 * @author: Markus Konietzka
 * @date: 23.11.2022
 */

#include<stdio.h>

int main(){
    long kontoNr = 8154711;
    int kundenNr = 4711;
    char a = 'a';

    printf("Kontonummer: %010ld, Kundennummer: %4d\n", kontoNr, kundenNr);
    printf("Kundennummer in Hex: %08X\n", kundenNr);
    printf("Der Buchstabe: %c\n", a);
    printf("Mit %hhd %% liegen wir richtig!\n", a);
}
