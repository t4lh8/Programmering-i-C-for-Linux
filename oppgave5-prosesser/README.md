# Oppgave 5 - Prosesser på Linux

**Mål:** bli kjent med systemkall og hvordan prosesser fungerer på Linux.

**Oppgave:** opprett en barneprosess med `fork()`. Barnet skriver ut sin PID og
avslutter med en kode, mens forelderen venter med `waitpid()` og leser koden.

```bash
gcc -Wall -Wextra -o prosess prosess.c
./prosess
```
