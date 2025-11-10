#include <stdio.h>

int main() {
    char tekst[200];
    int i = 0;
    int znak;  // int, żeby rozróżnić EOF
    int male = 0, duze = 0, cyfry = 0, inne = 0;

    printf("Wpisz tekst (zakoncz enterem)\n");

    while ((znak = getchar()) != '\n' && znak != EOF && i < sizeof(tekst) - 1) {
        tekst[i++] = (char)znak;

        if (znak >= 'A' && znak <= 'Z') duze++;
        else if (znak >= 'a' && znak <= 'z') male++;
        else if (znak >= '0' && znak <= '9') cyfry++;
        else inne++;
    }

    tekst[i] = '\0';

  printf("Wynik: %s, DUZE: %d, MALE: %d, CYFRY: %d, INNE: %d\n", tekst, duze, male, cyfry, inne);
    if (znak == EOF) {
        printf("\nKoniec pliku (EOF) zostal osiagniety.\n");
    }

    return 0;
}
