#ifndef TTEXTO_H_INCLUDED
#define TTEXTO_H_INCLUDED

#include "tPalavra.h"

typedef struct{
    tPalavraArranjo *pPalavra ;
    int tamanhoTex;
    int indiceTex;
}tTextoArranjo;

void inicializaTexto(tTextoArranjo* texto, int tamanho);
void inserePalavra(tTextoArranjo* texto, tPalavraArranjo *palavra);
void inserePalavraAleatoria(tTextoArranjo* texto);
void removePalavra(tTextoArranjo* texto, int indice);
void imprimeTexto(tTextoArranjo* texto);
int tamanhoTexto(tTextoArranjo* texto);
int tamanhoTextoMax(tTextoArranjo* texto);
void ordenaPorSelecaoTexto(tTextoArranjo texto);



#endif // TTEXTO_H_INCLUDED
