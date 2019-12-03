#include <stdio.h>
#include <stdlib.h>
#include "tPalavra.h"
#include "tTexto.h"
#include "tBiblioteca.h"

int main(){

    int i;

    tBibliotecaArranjo biblioteca1,biblioteca2;
    inicializaBiblioteca(&biblioteca1, 5);
    inicializaBiblioteca(&biblioteca2, 5);
    srand(75);
    for (i = 0; i < tamanhoBibliotecaMax(&biblioteca1); i++){
        int aleTex = ( 1 + rand()%7 );
        insereTextoAleatorio(&biblioteca1, aleTex);
    }//
    srand(75);
    for (i = 0; i < tamanhoBibliotecaMax(&biblioteca2); i++){
        int aleTex = ( 1 + rand()%7 );
        insereTextoAleatorio(&biblioteca2, aleTex);
    }//
    printf("\n");
    imprimeBiblioteca(&biblioteca1);
    printf("\n");
    imprimeBiblioteca(&biblioteca2);
    printf("\n\n\n\n\n\n");

    ordenaPorSelecao(biblioteca2);

    printf("\n\n\n\n\n\n");

    imprimeBiblioteca(&biblioteca2);



    return 0;
}
