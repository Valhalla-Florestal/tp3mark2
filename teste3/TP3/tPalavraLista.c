#include "tPalavraLista.h"

void inicializaPalavraLista(tPalavraLista *palavra){
    palavra->tamanhoPal = 0;
    palavra->inicio = NULL;
}

tPalavraListaItem* ultimaLetraLista(tPalavraLista *palavra){
    tPalavraListaItem *aux = palavra->inicio;
    if(aux != NULL)
        while(aux->prox != NULL)
            aux = aux->prox;
    return aux;
}

void insereLetraLista(tPalavraLista *palavra, char letra){
    tPalavraListaItem *item = (tPalavraListaItem*) malloc(sizeof(tPalavraListaItem));
    item->pLetra = (char*) malloc(sizeof(char));
    item->pLetra = letra;
    item->prox = NULL;
    if(palavra->tamanhoPal == 0){
        item->ant = NULL;
        palavra->inicio = item;
    }else if(palavra->tamanhoPal < 10){ // DOC - Não adiciona além do TAMANHO MAX
        ultimaLetraLista(palavra)->prox = item;
        item->ant = ultimaLetraLista(palavra);
    }
    palavra->tamanhoPal++;
}

void insereLetraAleatoriaLista(tPalavraLista *palavra){

    insereLetraLista(palavra, (char)(97 + (rand()%26)));

}

void removeLetraLista(tPalavraLista *palavra, int indice){

}

char primeiraLetraLista(tPalavraLista *palavra){
    return palavra->inicio->pLetra;
}

void imprimePalavraLista(tPalavraLista *palavra){

    tPalavraListaItem *item = palavra->inicio;
    while(item != NULL){
        printf("%c", item->pLetra);
        item = item->prox;
    }

}

int tamanhoPalavraLista(tPalavraLista *palavra){
    return palavra->tamanhoPal;
}
