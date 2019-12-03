#include "tTexto.h"

void inicializaTexto(tTextoArranjo* texto, int tamanho){
    texto->pPalavra = (tPalavraArranjo*) malloc(sizeof(tPalavraArranjo) * tamanho);
    texto->tamanhoTex = tamanho;
    texto->indiceTex = 0;
}

void inserePalavra(tTextoArranjo* texto, tPalavraArranjo *palavra){

    if(texto->tamanhoTex > texto->indiceTex){ // DOC - Não adiciona além do TAMANHO MAX
        texto->pPalavra[texto->indiceTex] = *palavra;
        texto->indiceTex++;
    }

}

void inserePalavraAleatoria(tTextoArranjo* texto){

    tPalavraArranjo *palavra = (tPalavraArranjo*) malloc(sizeof(tPalavraArranjo));
    inicializaPalavra(palavra);
    int i;
    for (i = 0; i < tamanhoPalavraMax(palavra); i++)
        insereLetraAleatoria(palavra);
    inserePalavra(texto, palavra);

}



void removePalavra(tTextoArranjo* texto, int indice){

    int i;
    int ultimaPos = texto->tamanhoTex-1;
    for (i = indice; i < ultimaPos; i++)
        texto->pPalavra[i] = texto->pPalavra[i+1];
    texto->indiceTex--;

}

void imprimeTexto(tTextoArranjo* texto){
    int i;
    printf("Imprimindo um Texto:\n\t");
    for(i = 0; i < texto->indiceTex; i++){
        imprimePalavra(&texto->pPalavra[i]);
        printf(" ");
    }
}

int tamanhoTexto(tTextoArranjo* texto){
    return texto->indiceTex;
}

int tamanhoTextoMax(tTextoArranjo* texto){
    return texto->tamanhoTex;
}

void ordenaPorSelecaoTexto(tTextoArranjo texto){
    /*int n = tamanhoTexto(&texto);
    int i, j, Min;
    tPalavraArranjo aux;
    for (i = 0; i < n - 1; i++){
        Min = i;
        for (j = i + 1 ; j < n; j++)
            if ( (primeiraLetra(texto.pPalavra[j])) < (primeiraLetra(texto.pPalavra[Min])))
                Min = j;
        aux = texto.pPalavra[Min];
        texto.pPalavra[Min] = texto.pPalavra[i];
        texto.pPalavra[i] = aux;
    }

    imprimeBiblioteca(&biblioteca);*/
}


