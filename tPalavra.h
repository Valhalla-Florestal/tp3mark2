#ifndef TPALAVRA_H_INCLUDED
#define TPALAVRA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *pLetra;
    int tamanhoPal;
    int indicePal;
}tPalavraArranjo;

void inicializaPalavra(tPalavraArranjo *palavra);
void insereLetra(tPalavraArranjo *palavra, char letra);
void insereLetraAleatoria(tPalavraArranjo *palavra);
void removeLetra(tPalavraArranjo *palavra, int indice);
char primeiraLetra(tPalavraArranjo *palavra); // DOC - Retorna a primeira letra de uma PALAVRA
void imprimePalavra(tPalavraArranjo *palavra);
int tamanhoPalavra(tPalavraArranjo *palavra);
int tamanhoPalavraMax(tPalavraArranjo *palavra);



#endif // TPALAVRA_H_INCLUDED
