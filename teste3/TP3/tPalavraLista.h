#ifndef TPALAVRALIST_H_INCLUDED
#define TPALAVRALIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tPalavraListaItem_{
    char *pLetra;
    struct tPalavraListaItem_ *prox, *ant;
}tPalavraListaItem;

typedef struct{
    tPalavraListaItem *inicio;
    int tamanhoPal;
}tPalavraLista;

void inicializaPalavraLista(tPalavraLista *palavra);
tPalavraListaItem* ultimaLetraLista(tPalavraLista *palavra);
void insereLetraLista(tPalavraLista *palavra, char letra);
void insereLetraAleatoriaLista(tPalavraLista *palavra);
void removeLetraLista(tPalavraLista *palavra, int indice);
char primeiraLetraLista(tPalavraLista *palavra);
void imprimePalavraLista(tPalavraLista *palavra);
int tamanhoPalavraLista(tPalavraLista *palavra);


#endif // TPALAVRALIST_H_INCLUDED
