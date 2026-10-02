# Oppgave 4 - Filbehandling

**Mål:** lese fra fil med `fopen`/`fgetc` og håndtere feil.

**Oppgave:** skriv en liten versjon av `wc` som teller linjer, ord og tegn i
en tekstfil.

```bash
gcc -Wall -Wextra -o ordtelling ordtelling.c
printf "hei fra\nc for linux\n" > test.txt
./ordtelling test.txt
```
