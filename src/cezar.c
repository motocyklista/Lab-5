#include <stdio.h>

#define MAX_TEXT 199
#define MAX_SHIFT 25

int main() {
    char tekst[MAX_TEXT + 1];  // +1 na '\0'
    int znak;
    int i = 0;
    int k;

    printf("Podaj tekst do zaszyfrowania (max %d znakow):\n", MAX_TEXT);

    while ((znak = getchar()) != '\n' && znak != EOF && i < MAX_TEXT) {
        tekst[i++] = (char)znak;
    }
    tekst[i] = '\0';

    printf("Podaj przesuniecie (0-%d): ", MAX_SHIFT);
    if (scanf("%d", &k) != 1 || k < 0 || k > MAX_SHIFT) {
        printf("Blad: przesuniecie musi byc liczba od 0 do %d.\n", MAX_SHIFT);
        return 1;
    }

    for (i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] >= 'A' && tekst[i] <= 'Z') {
            tekst[i] = 'A' + (tekst[i] - 'A' + k) % 26;
        } else if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            tekst[i] = 'a' + (tekst[i] - 'a' + k) % 26;
        }
    }

    printf("Zaszyfrowany tekst: %s\n", tekst);
    return 0;
}
