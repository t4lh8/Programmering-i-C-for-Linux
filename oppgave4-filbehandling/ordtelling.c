/*
 * Oppgave 4 - Filbehandling
 * Teller linjer, ord og tegn i en tekstfil (en liten "wc").
 * Bygg:  gcc -Wall -Wextra -o ordtelling ordtelling.c
 * Kjor:  ./ordtelling fil.txt
 */
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Bruk: %s <fil>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        perror("fopen");
        return 1;
    }

    long linjer = 0, ord = 0, tegn = 0;
    int c, i_ord = 0;

    while ((c = fgetc(f)) != EOF) {
        tegn++;
        if (c == '\n')
            linjer++;
        if (isspace(c)) {
            i_ord = 0;
        } else if (!i_ord) {
            i_ord = 1;
            ord++;
        }
    }

    fclose(f);
    printf("Linjer: %ld  Ord: %ld  Tegn: %ld  (%s)\n", linjer, ord, tegn, argv[1]);
    return 0;
}
