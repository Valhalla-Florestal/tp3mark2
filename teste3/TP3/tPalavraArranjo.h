#ifndef TPALAVRAARRANJO_H_INCLUDED
#define TPALAVRAARRANJO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *pLetra;
    int tamanhoPal;
    int indicePal;
}tPalavraArranjo;

void inicializaPalavraArranjo(tPalavraArranjo *palavra);
void insereLetraArranjo(tPalavraArranjo *palavra, char letra);
void insereLetraAleatoriaArranjo(tPalavraArranjo *palavra);
void removeLetraArranjo(tPalavraArranjo *palavra, int indice);
char primeiraLetraArranjo(tPalavraArranjo *palavra); // DOC - Retorna a primeira letra de uma PALAVRA
void imprimePalavraArranjo(tPalavraArranjo *palavra);
int tamanhoPalavraArranjo(tPalavraArranjo *palavra);
int tamanhoMaxPalavraArranjo(tPalavraArranjo *palavra);


#endif // TPALAVRA_H_INCLUDED
