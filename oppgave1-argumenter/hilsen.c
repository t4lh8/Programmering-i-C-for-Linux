/*
 * Oppgave 1 - Kommandolinjeargumenter
 * Leser navn fra argv og hilser paa hver enkelt.
 * Bygg:  gcc -Wall -Wextra -o hilsen hilsen.c
 * Kjor:  ./hilsen Talha Kari
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Bruk: %s <navn> [navn ...]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
        printf("Hei, %s!\n", argv[i]);

    printf("Du oppga %d navn.\n", argc - 1);
    return 0;
}
