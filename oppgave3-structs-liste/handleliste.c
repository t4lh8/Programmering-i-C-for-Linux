/*
 * Oppgave 3 - Structs og dynamisk minne (lenket liste)
 * Bygger en enkel handleliste som en enkeltlenket liste, skriver den ut
 * og frigjor minnet til slutt.
 * Bygg:  gcc -Wall -Wextra -o handleliste handleliste.c
 * Kjor:  ./handleliste
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Vare {
    char navn[64];
    int antall;
    struct Vare *neste;
} Vare;

static Vare *lag_vare(const char *navn, int antall)
{
    Vare *v = malloc(sizeof(Vare));
    if (v == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    strncpy(v->navn, navn, sizeof(v->navn) - 1);
    v->navn[sizeof(v->navn) - 1] = '\0';
    v->antall = antall;
    v->neste = NULL;
    return v;
}

/* Legger varen fremst i lista. */
static void legg_til(Vare **hode, const char *navn, int antall)
{
    Vare *v = lag_vare(navn, antall);
    v->neste = *hode;
    *hode = v;
}

static void skriv_ut(const Vare *hode)
{
    printf("Handleliste:\n");
    for (const Vare *v = hode; v != NULL; v = v->neste)
        printf("  - %d x %s\n", v->antall, v->navn);
}

static void frigjor(Vare *hode)
{
    while (hode != NULL) {
        Vare *neste = hode->neste;
        free(hode);
        hode = neste;
    }
}

int main(void)
{
    Vare *liste = NULL;

    legg_til(&liste, "melk", 2);
    legg_til(&liste, "brod", 1);
    legg_til(&liste, "egg", 12);

    skriv_ut(liste);
    frigjor(liste);
    return 0;
}
