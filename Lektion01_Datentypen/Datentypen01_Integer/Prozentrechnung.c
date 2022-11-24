/**
 * @author: Markus Konietzka
 * @date: 24.11.2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int teil = 1;
    int ganzes = 6;
    int count;
    int prozent;

    /* Eingabe */
    do {
        fflush(stdin);
        printf("Bitte 2 ganze Zalen für Teil und Ganzes (mit Komma getrennt) eingeben: ");
        count = scanf("%d, %d", &teil, &ganzes);
    } while (count != 2);

    /* Ausgabe */
    prozent = teil * 100 / ganzes;
    printf("%d von %d entsprechen: %d %%\n", teil, ganzes, prozent);

    /* runden */
    int gerundet;
    gerundet = (teil * 100 + ganzes / 2) / ganzes;
    printf("%d von %d entsprechen gerundet: %d %%\n", teil, ganzes, gerundet);
    return 0;
}
