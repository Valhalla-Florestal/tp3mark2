#ifndef TBIBLIOTECA_H_INCLUDED
#define TBIBLIOTECA_H_INCLUDED

#include "tTexto.h"

typedef struct{
    tTextoArranjo *pTextos;
    int tamanhoBib;
    int indiceBib;
}tBibliotecaArranjo;

void inicializaBiblioteca(tBibliotecaArranjo* biblioteca, int tamanho);
void insereTexto(tBibliotecaArranjo *biblioteca, tTextoArranjo *texto);
void insereTextoAleatorio(tBibliotecaArranjo *biblioteca, int tamanhoTexto);
void removeTexto(tBibliotecaArranjo *biblioteca, int indice);
int tamanhoBiblioteca(tBibliotecaArranjo *biblioteca);
int tamanhoBibliotecaMax(tBibliotecaArranjo *biblioteca);
void ordenaPorSelecao(tBibliotecaArranjo biblioteca);
void ordenaPorShellSort(tBibliotecaArranjo *biblioteca);

#endif // TBIBLIOTECA_H_INCLUDED
