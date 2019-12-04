#ifndef TTEXTOARRANJO_H_INCLUDED
#define TTEXTOARRANJO_H_INCLUDED

#include "tPalavraArranjo.h"

typedef struct{
    tPalavraArranjo *pPalavra ;
    int tamanhoTex;
    int indiceTex;
}tTextoArranjo;


void inicializaTextoArranjo(tTextoArranjo* texto, int tamanho);
void inserePalavraArranjo(tTextoArranjo* texto, tPalavraArranjo *palavra);
void inserePalavraAleatoriaArranjo(tTextoArranjo* texto);
void removePalavraArranjo(tTextoArranjo* texto, int indice);
void imprimeTextoArranjo(tTextoArranjo* texto);
int tamanhoTextoArranjo(tTextoArranjo* texto);
int tamanhoMaxTextoArranjo(tTextoArranjo* texto);
void ordenaPorSelecaoTextoArranjo(tTextoArranjo *texto);

void OrdenaTexAr(int Esq, int Dir, tTextoArranjo *A);
void QuickSortTexAr(tTextoArranjo *A, int n);
void ParticaoTexAr(int Esq, int Dir, int *i, int *j, tTextoArranjo *A);


#endif // TTEXTO_H_INCLUDED
