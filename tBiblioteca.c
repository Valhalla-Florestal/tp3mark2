#include "tTexto.h"
#include "tBiblioteca.h"

void inicializaBiblioteca(tBibliotecaArranjo* biblioteca, int tamanho){
    biblioteca->pTextos = (tTextoArranjo*) malloc(sizeof(tTextoArranjo) * tamanho);
    biblioteca->tamanhoBib = tamanho;
    biblioteca->indiceBib = 0;
}//Inicializa biblioteca

void insereTexto(tBibliotecaArranjo *biblioteca, tTextoArranjo *texto){

    if(biblioteca->tamanhoBib > biblioteca->indiceBib){ // DOC - Não adiciona além do TAMANHO MAX
        biblioteca->pTextos[biblioteca->indiceBib] = *texto;
        biblioteca->indiceBib++;
    }
}

void insereTextoAleatorio(tBibliotecaArranjo *biblioteca, int tamanhoTexto){

    tTextoArranjo *texto= (tTextoArranjo*) malloc(sizeof(tTextoArranjo));
    inicializaTexto(texto, tamanhoTexto);
    int i;
    for (i = 0; i < tamanhoTextoMax(texto); i++)
        inserePalavraAleatoria(texto);
    insereTexto(biblioteca, texto);

}

void removeTexto(tBibliotecaArranjo *biblioteca, int indice){

    int i;
    int ultimaPos = biblioteca->tamanhoBib-1;
    for (i = indice; i < ultimaPos; i++)
        biblioteca->pTextos[i] = biblioteca->pTextos[i+1];
    biblioteca->indiceBib--;

}

int tamanhoBiblioteca(tBibliotecaArranjo *biblioteca){
    return biblioteca->indiceBib;
}

int tamanhoBibliotecaMax(tBibliotecaArranjo *biblioteca){
    return biblioteca->tamanhoBib;
}

void imprimeBiblioteca(tBibliotecaArranjo *biblioteca){

    printf("Imprimindo Biblioteca:\n");
    int i;
    for (i = 0; i < tamanhoBibliotecaMax(biblioteca); i++){
        printf("Texto %d\n", i+1);
        imprimeTexto(&biblioteca->pTextos[i]);
        printf("\n");
    }

}

void ordenaPorSelecao(tBibliotecaArranjo biblioteca){

    int n = tamanhoBiblioteca(&biblioteca);
    int i, j, Min;
    tTextoArranjo aux;
    for (i = 0; i < n - 1; i++){
        Min = i;
        for (j = i + 1 ; j < n; j++)
            if ( biblioteca.pTextos[j].indiceTex < biblioteca.pTextos[Min].indiceTex)
                Min = j;
        aux = biblioteca.pTextos[Min];
        biblioteca.pTextos[Min] = biblioteca.pTextos[i];
        biblioteca.pTextos[i] = aux;
    }
    printf("\n imprimindo na ordenacao");
    //imprimeBiblioteca(&biblioteca);
}

void ordenaPorShellSort(tBibliotecaArranjo *biblioteca){

}
