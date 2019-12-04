#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tPalavraLista.h"

int main(){
    long long int semente = time(NULL);
    srand(semente);

    tPalavraLista *pal =(tPalavraLista*) malloc(sizeof(tPalavraLista));;

    inicializaPalavraLista(pal);


    insereLetraAleatoriaLista(pal);
    insereLetraAleatoriaLista(pal);
    insereLetraAleatoriaLista(pal);
    insereLetraAleatoriaLista(pal);
    insereLetraAleatoriaLista(pal);

    imprimePalavraLista(pal);


    return 0;
}
