#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tPalavraArranjo.h"
#include "tTextoArranjo.h"
#include "tBibliotecaArranjo.h"

int main(){
    long long int semente = time(NULL);

    /*tPalavraArranjo *palavra = (tPalavraArranjo*) malloc(sizeof(tPalavraArranjo));
    inicializaPalavra(palavra);
    for(i = 0; i < tamanhoPalavraMax(palavra); i++)
        insereLetraAleatoria(palavra);
    tPalavraArranjo *nova;
    nova = copiaPalavra(palavra);
    imprimePalavra(palavra);
    printf("\n");
    palavra->pLetra[0]='a';
    imprimePalavra(palavra);
    printf("\n");
    imprimePalavra(nova);*/


    /*
    tTextoArranjo *texto = (tTextoArranjo*) malloc(sizeof(tTextoArranjo));
    inicializaTexto(texto, 10);
    for (i = 0; i < tamanhoTextoMax(texto); i++)
        inserePalavraAleatoria(texto);
    printf("%d | ", tamanhoTextoMax(texto));
    imprimeTexto(texto);

    printf("\n\n");
    */

    //TESTE ORDENA BIBLIOTECA
    int i;
    tBibliotecaArranjo biblioteca1, biblioteca2;
    inicializaBibliotecaArranjo(&biblioteca1, 100);
    inicializaBibliotecaArranjo(&biblioteca2, 100);
    srand(semente);
    for (i = 0; i < tamanhoMaxBibliotecaArranjo(&biblioteca1); i++)
        insereTextoAleatorioArranjo(&biblioteca1, ( 1 + rand()%10 ) );
    //imprimeBibliotecaArranjo(&biblioteca1);
    //printf("\n");
    srand(semente);
    for (i = 0; i < tamanhoMaxBibliotecaArranjo(&biblioteca2); i++)
        insereTextoAleatorioArranjo(&biblioteca2, ( 1 + rand()%10 ) );
    //imprimeBibliotecaArranjo(&biblioteca2);
    //printf("\n\n\n\n\n\n");
    ordenaPorSelecaoArranjo(biblioteca2);
    //QuickSortBibAr(&biblioteca2,tamanhoBibliotecaArranjo(&biblioteca2));
    //printf("\n\n\n\n\n\n");
    //imprimeBibliotecaArranjo(&biblioteca1);
    //printf("\n\n");
    //imprimeBibliotecaArranjo(&biblioteca2);


    //TESTE ORDENA TEXTOS
    /*tBibliotecaArranjo bibli;
    inicializaBibliotecaArranjo(&bibli, 1);
    insereTextoAleatorioArranjo(&bibli,5);
    imprimeTextoArranjo(&bibli.pTextos[0]);
    ordenaPorSelecaoTextoArranjo(&bibli.pTextos[0]);
    QuickSortAr(&bibli.pTextos[0],tamanhoTextoArranjo(&bibli.pTextos[0]));
    printf("\n");
    imprimeTextoArranjo(&bibli.pTextos[0]);*/

    return 0;
}
