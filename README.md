# Programmering i C for Linux

![Build](https://github.com/t4lh8/Programmering-i-C-for-Linux/actions/workflows/build.yml/badge.svg)
![C](https://img.shields.io/badge/C-C11-00599C?logo=c)
![Linux](https://img.shields.io/badge/Linux-gcc-FCC624?logo=linux&logoColor=black)

Små øvingsoppgaver fra emnet **PG3401 - Programmering i C for Linux** ved Høyskolen
Kristiania, der jeg utforsker C og grunnleggende Linux-systemprogrammering: pekere og
minne, structs, filbehandling og prosesser.

🔗 Emnebeskrivelse: <https://www.kristiania.no/studieportal/fakultet-for-helse-og-teknologi/bachelorniva/pg3401/programmering-i-c-for-linux/>

## Oppgaver

| # | Oppgave | Tema |
|---|---|---|
| 1 | [Kommandolinjeargumenter](oppgave1-argumenter/) | `argc`/`argv`, utskrift |
| 2 | [Pekere og strenger](oppgave2-pekere/) | pekere, snu streng på plass |
| 3 | [Structs og dynamisk minne](oppgave3-structs-liste/) | `struct`, `malloc`/`free`, lenket liste |
| 4 | [Filbehandling](oppgave4-filbehandling/) | `fopen`/`fgetc`, en liten `wc` |
| 5 | [Prosesser på Linux](oppgave5-prosesser/) | `fork()`, `waitpid()`, systemkall |

## Bygg og kjør

Alt bygges med `gcc` på Linux. Bygg alle oppgavene på én gang:

```bash
make            # kompilerer alle oppgavene med -Wall -Wextra
make clean      # fjerner de kompilerte programmene
```

Eller bygg én oppgave for seg:

```bash
cd oppgave2-pekere
gcc -Wall -Wextra -o snu_tekst snu_tekst.c
./snu_tekst Kristiania
```

Hver oppgave kompileres og kjøres automatisk på Ubuntu via GitHub Actions
(se [build-arbeidsflyten](.github/workflows/build.yml)).

## Hva jeg har lært

- Hvordan C-programmer leser argumenter og håndterer feil
- Pekere og hvordan data ligger i minnet
- `struct` med dynamisk minne og å unngå minnelekkasjer (`malloc`/`free`)
- Lese og skrive filer
- Grunnleggende Linux-systemprogrammering med prosesser (`fork`/`waitpid`)
- Å bygge med `gcc` og en enkel `Makefile`
