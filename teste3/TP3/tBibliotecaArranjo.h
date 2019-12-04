#ifndef TBIBLIOTECAARRANJO_H_INCLUDED
#define TBIBLIOTECAARRANJO_H_INCLUDED

#include "tTextoArranjo.h"

typedef struct{
    tTextoArranjo *pTextos;
    int tamanhoBib;
    int indiceBib;
}tBibliotecaArranjo;

void inicializaBibliotecaArranjo(tBibliotecaArranjo* biblioteca, int tamanho);
void insereTextoArranjo(tBibliotecaArranjo *biblioteca, tTextoArranjo *texto);
void insereTextoAleatorioArranjo(tBibliotecaArranjo *biblioteca, int tamanhoTexto);
void removeTextoArranjo(tBibliotecaArranjo *biblioteca, int indice);
int tamanhoBibliotecaArranjo(tBibliotecaArranjo *biblioteca);
int tamanhoMaxBibliotecaArranjo(tBibliotecaArranjo *biblioteca);
void ordenaPorSelecaoArranjo(tBibliotecaArranjo biblioteca);

void OrdenaBibAr(int Esq, int Dir, tBibliotecaArranjo *A);
void QuickSortBibAr(tBibliotecaArranjo *A, int n);
void ParticaoBibAr(int Esq, int Dir, int *i, int *j, tBibliotecaArranjo *A);

#endif // TBIBLIOTECA_H_INCLUDED
