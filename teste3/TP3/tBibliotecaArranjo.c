#include "tTextoArranjo.h"
#include "tBibliotecaArranjo.h"
#include <time.h>

void inicializaBibliotecaArranjo(tBibliotecaArranjo* biblioteca, int tamanho){
    biblioteca->pTextos = (tTextoArranjo*) malloc(sizeof(tTextoArranjo) * tamanho);
    biblioteca->tamanhoBib = tamanho;
    biblioteca->indiceBib = 0;
}//Inicializa biblioteca

void insereTextoArranjo(tBibliotecaArranjo *biblioteca, tTextoArranjo *texto){

    if(biblioteca->tamanhoBib > biblioteca->indiceBib){ // DOC - Não adiciona além do TAMANHO MAX
        biblioteca->pTextos[biblioteca->indiceBib] = *texto;
        biblioteca->indiceBib++;
    }

}

void insereTextoAleatorioArranjo(tBibliotecaArranjo *biblioteca, int tamanhoTexto){

    tTextoArranjo *texto= (tTextoArranjo*) malloc(sizeof(tTextoArranjo));
    inicializaTextoArranjo(texto, tamanhoTexto);
    int i;
    for (i = 0; i < tamanhoMaxTextoArranjo(texto); i++)
        inserePalavraAleatoriaArranjo(texto);
    insereTextoArranjo(biblioteca, texto);

}

void removeTextoArranjo(tBibliotecaArranjo *biblioteca, int indice){

    int i;
    int ultimaPos = biblioteca->tamanhoBib-1;
    for (i = indice; i < ultimaPos; i++)
        biblioteca->pTextos[i] = biblioteca->pTextos[i+1];
    biblioteca->indiceBib--;

}

int tamanhoBibliotecaArranjo(tBibliotecaArranjo *biblioteca){
    return biblioteca->indiceBib;
}

int tamanhoMaxBibliotecaArranjo(tBibliotecaArranjo *biblioteca){
    return biblioteca->tamanhoBib;
}

void imprimeBibliotecaArranjo(tBibliotecaArranjo *biblioteca){

    printf("Imprimindo Biblioteca:\n");
    int i;
    for (i = 0; i < tamanhoMaxBibliotecaArranjo(biblioteca); i++){
        printf("Texto %d\n", i+1);
        imprimeTextoArranjo(&biblioteca->pTextos[i]);
        printf("\n");
    }

}

void ordenaPorSelecaoArranjo(tBibliotecaArranjo biblioteca){
    clock_t fim,inicio = clock();
    double tempo;
    int n = tamanhoBibliotecaArranjo(&biblioteca);
    int i, j, Min;
    tTextoArranjo aux;
    inicio=clock();
    for (i = 0; i < n - 1; i++){
        Min = i;
        for (j = i + 1 ; j < n; j++)
            if ( biblioteca.pTextos[j].indiceTex < biblioteca.pTextos[Min].indiceTex)
                Min = j;
        aux = biblioteca.pTextos[Min];
        biblioteca.pTextos[Min] = biblioteca.pTextos[i];
        biblioteca.pTextos[i] = aux;
    }

    fim = clock();
    tempo = (fim - inicio)*1000.0/CLOCKS_PER_SEC;
    printf("\n o tempo gasto para ordenar com selecao foi: %.100lf s\n",tempo/1000);
}

void OrdenaBibAr(int Esq, int Dir, tBibliotecaArranjo *A){
    int i,j;
    ParticaoBibAr(Esq, Dir, &i, &j, A);
    if (Esq < j)
        OrdenaBibAr(Esq, j, A);
    if (i < Dir)
        OrdenaBibAr(i, Dir, A);
}

void QuickSortBibAr(tBibliotecaArranjo *A, int n){
    OrdenaBibAr(0, n-1, A);
}

void ParticaoBibAr(int Esq, int Dir, int *i, int *j, tBibliotecaArranjo *A){
    tTextoArranjo pivo, aux;
    *i = Esq;
    *j = Dir;

    pivo = A->pTextos[(((*i) + (*j))/2)]; /* obtem o pivo x */
    do{
        while (tamanhoTextoArranjo(&pivo) > tamanhoTextoArranjo(&A->pTextos[(*i)])){
            (*i)++;
        }
        while (tamanhoTextoArranjo(&pivo) < tamanhoTextoArranjo(&A->pTextos[(*j)]))
            (*j)--;
        if ((*i) <= (*j)){
            aux = A->pTextos[*i];
            A->pTextos[*i] = A->pTextos[*j];
            A->pTextos[*j] = aux;
            (*i)++;
            (*j)--;
        }
    }
    while ((*i) <= (*j));



}
