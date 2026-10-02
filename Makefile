CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11 -O2

OPPGAVER = oppgave1-argumenter/hilsen \
           oppgave2-pekere/snu_tekst \
           oppgave3-structs-liste/handleliste \
           oppgave4-filbehandling/ordtelling \
           oppgave5-prosesser/prosess

all: $(OPPGAVER)

# Bygg hver oppgave fra sin egen .c-fil
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OPPGAVER)

.PHONY: all clean
