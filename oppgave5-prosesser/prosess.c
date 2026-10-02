/*
 * Oppgave 5 - Prosesser paa Linux (systemkall)
 * Oppretter en barneprosess med fork(). Barnet skriver ut sin egen PID
 * og avslutter med en kode, mens forelderen venter og leser koden.
 * Bygg:  gcc -Wall -Wextra -o prosess prosess.c
 * Kjor:  ./prosess
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    printf("Forelder starter (PID %d)\n", getpid());

    pid_t pid = fork();
    if (pid < 0) {
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        /* Barneprosessen */
        printf("  Barn kjorer (PID %d, forelder %d)\n", getpid(), getppid());
        return 42;
    }

    /* Forelderen venter paa at barnet blir ferdig */
    int status;
    waitpid(pid, &status, 0);

    if (WIFEXITED(status))
        printf("Forelder: barnet avsluttet med kode %d\n", WEXITSTATUS(status));

    return 0;
}
