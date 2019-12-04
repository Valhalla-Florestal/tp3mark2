#include "tPalavraArranjo.h"


void inicializaPalavraArranjo(tPalavraArranjo* palavra){
    palavra->tamanhoPal  = 10;/* 1 + (rand() %10);*/ // DOC - Tamanho Maximo da Palavra (Gerado aleatoriamente)
    palavra->pLetra = (char*) malloc(sizeof(char) * (palavra->tamanhoPal+1)); // DOC - Alocação da quantidade de letras -> 1 A Mais para alocar o \0
    int i;
    for (i = 0; i < palavra->tamanhoPal; i++){
        palavra->pLetra[i] = NULL;
    }
    palavra->pLetra[palavra->tamanhoPal] = '\0';
    palavra->indicePal = 0; // DOC - Indice para Inserção
}

void insereLetraArranjo(tPalavraArranjo* palavra, char letra){

    if(palavra->tamanhoPal > palavra->indicePal){ // DOC - Não adiciona além do TAMANHO MAX
        palavra->pLetra[palavra->indicePal] = letra;
        palavra->indicePal++;
    }

}

void insereLetraAleatoriaArranjo(tPalavraArranjo *palavra){

    insereLetraArranjo(palavra, (char)(97 + (rand()%26)));

}

void removeLetraArranjo(tPalavraArranjo* palavra, int indice){

    int i;
    int ultimaPos = palavra->tamanhoPal-1;
    for (i = indice; i < ultimaPos; i++)
        palavra->pLetra[i] = palavra->pLetra[i+1];
    palavra->pLetra[ultimaPos] = NULL;
    palavra->indicePal--;

}

void imprimePalavraArranjo(tPalavraArranjo *palavra){
    printf("%s ", palavra->pLetra);
}

int tamanhoPalavraArranjo(tPalavraArranjo *palavra){
    return palavra->indicePal;
}

int tamanhoMaxPalavraArranjo(tPalavraArranjo *palavra){
    return palavra->tamanhoPal;
}

char primeiraLetraArranjo(tPalavraArranjo *palavra){
    return (char)palavra->pLetra[0];
}

