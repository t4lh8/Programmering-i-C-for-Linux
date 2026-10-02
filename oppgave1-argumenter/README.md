# Oppgave 1 - Kommandolinjeargumenter

**Mål:** bli kjent med `main(int argc, char *argv[])` og hvordan et C-program
leser argumenter fra kommandolinjen.

**Oppgave:** skriv et program som tar ett eller flere navn som argumenter og
skriver ut en hilsen til hver. Hvis ingen navn oppgis, skal programmet vise
riktig bruk.

```bash
gcc -Wall -Wextra -o hilsen hilsen.c
./hilsen Talha Kari
```
