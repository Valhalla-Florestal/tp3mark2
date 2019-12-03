#include "tPalavra.h"


void inicializaPalavra(tPalavraArranjo* palavra){
    palavra->tamanhoPal = 1 + (rand() % 10); // DOC - Tamanho Maximo da Palavra (Gerado aleatoriamente)
    palavra->pLetra = (char*) malloc(sizeof(char) * (palavra->tamanhoPal+1)); // DOC - Alocação da quantidade de letras -> 1 A Mais para alocar o \0
    int i;
    for (i = 0; i < palavra->tamanhoPal; i++){
        palavra->pLetra[i] = NULL;
    }
    palavra->pLetra[palavra->tamanhoPal] = '\0';
    palavra->indicePal = 0; // DOC - Indice para Inserção
}

void insereLetra(tPalavraArranjo* palavra, char letra){

    if(palavra->tamanhoPal > palavra->indicePal){ // DOC - Não adiciona além do TAMANHO MAX
        palavra->pLetra[palavra->indicePal] = letra;
        palavra->indicePal++;
    }

}

void insereLetraAleatoria(tPalavraArranjo *palavra){

    insereLetra(palavra, (char)(97 + (rand()%26)));

}

void removeLetra(tPalavraArranjo* palavra, int indice){

    int i;
    int ultimaPos = palavra->tamanhoPal-1;
    for (i = indice; i < ultimaPos; i++)
        palavra->pLetra[i] = palavra->pLetra[i+1];
    palavra->pLetra[ultimaPos] = NULL;
    palavra->indicePal--;

}

void imprimePalavra(tPalavraArranjo *palavra){
    printf("%s", palavra->pLetra);
}

int tamanhoPalavra(tPalavraArranjo *palavra){
    return palavra->indicePal;
}

int tamanhoPalavraMax(tPalavraArranjo *palavra){
    return palavra->tamanhoPal;
}

char primeiraLetra(tPalavraArranjo *palavra){
    return (char)palavra->pLetra[0];
}
