#include <stdio.h>

typedef struct list {
    int zahl;
    char zeichen;
    struct list *next;
} tList;

int main() {
    printf("Hello, World!\n");

    tList test1 = {123, 'a', NULL};
    tList test2 = {456, 'b', &test1};

    printf("%c: %d\n%c: %d", test2.zeichen, test2.zahl, test2.next->zeichen, test2.next->zahl);
    return 0;
}
