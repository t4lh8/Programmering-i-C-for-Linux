/*
 * Oppgave 2 - Pekere og strenger
 * Snur en tekststreng paa plass ved hjelp av to pekere.
 * Bygg:  gcc -Wall -Wextra -o snu_tekst snu_tekst.c
 * Kjor:  ./snu_tekst Kristiania
 */
#include <stdio.h>
#include <string.h>

/* Snur strengen i minnet: bytter tegn fra hver ende mot midten. */
static void snu(char *s)
{
    if (*s == '\0')
        return;

    char *start = s;
    char *slutt = s + strlen(s) - 1;

    while (start < slutt) {
        char tmp = *start;
        *start++ = *slutt;
        *slutt-- = tmp;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Bruk: %s <tekst>\n", argv[0]);
        return 1;
    }

    char buffer[256];
    strncpy(buffer, argv[1], sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    printf("Original: %s\n", buffer);
    snu(buffer);
    printf("Snudd:    %s\n", buffer);
    return 0;
}
