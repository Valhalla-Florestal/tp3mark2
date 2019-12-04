#include "tTextoArranjo.h"

void inicializaTextoArranjo(tTextoArranjo* texto, int tamanho){
    texto->pPalavra = (tPalavraArranjo*) malloc(sizeof(tPalavraArranjo) * tamanho);
    texto->tamanhoTex = tamanho;
    texto->indiceTex = 0;
}

void inserePalavraArranjo(tTextoArranjo* texto, tPalavraArranjo *palavra){

    if(texto->tamanhoTex > texto->indiceTex){ // DOC - Não adiciona além do TAMANHO MAX
        texto->pPalavra[texto->indiceTex] = *palavra;
        texto->indiceTex++;
    }

}

void inserePalavraAleatoriaArranjo(tTextoArranjo* texto){

    tPalavraArranjo *palavra = (tPalavraArranjo*) malloc(sizeof(tPalavraArranjo));
    inicializaPalavraArranjo(palavra);
    int i;
    for (i = 0; i < tamanhoMaxPalavraArranjo(palavra); i++)
        insereLetraAleatoriaArranjo(palavra);
    inserePalavraArranjo(texto, palavra);
}

void removePalavraArranjo(tTextoArranjo* texto, int indice){

    int i;
    int ultimaPos = texto->tamanhoTex-1;
    for (i = indice; i < ultimaPos; i++)
        texto->pPalavra[i] = texto->pPalavra[i+1];
    texto->indiceTex--;

}

void imprimeTextoArranjo(tTextoArranjo* texto){
    int i;
    printf("Imprimindo um Texto:\n\t");
    for(i = 0; i < texto->indiceTex; i++){
        imprimePalavraArranjo(&texto->pPalavra[i]);
        printf(" ");
    }
}

int tamanhoTextoArranjo(tTextoArranjo* texto){
    return texto->indiceTex;
}

int tamanhoMaxTextoArranjo(tTextoArranjo* texto){
    return texto->tamanhoTex;
}

void ordenaPorSelecaoTextoArranjo(tTextoArranjo *texto){
    int n=tamanhoTextoArranjo(texto);
    int i, j, Min;
    tPalavraArranjo aux;
    for (i = 0; i < n - 1; i++){
        Min = i;
        for (j = i + 1 ; j < n; j++)
            if ( (primeiraLetraArranjo(&texto->pPalavra[j])) < (primeiraLetraArranjo(&texto->pPalavra[Min])))
                Min = j;
        aux = texto->pPalavra[Min];
        texto->pPalavra[Min] = texto->pPalavra[i];
        texto->pPalavra[i] = aux;
    }

    //imprimeBiblioteca(&biblioteca);
}

void OrdenaTexAr(int Esq, int Dir, tTextoArranjo *A){
    int i,j;
    ParticaoTexAr(Esq, Dir, &i, &j, A);
    if (Esq < j)
        OrdenaTexAr(Esq, j, A);
    if (i < Dir)
        OrdenaTexAr(i, Dir, A);
}

void QuickSortTexAr(tTextoArranjo *A, int n){
    OrdenaTexAr(0, n-1, A);
}

void ParticaoTexAr(int Esq, int Dir, int *i, int *j, tTextoArranjo *A){
    tPalavraArranjo pivo, aux;
    *i = Esq;
    *j = Dir;

    pivo = A->pPalavra[(((*i) + (*j))/2)]; /* obtem o pivo x */
    do{
        while (primeiraLetraArranjo(&pivo) > primeiraLetraArranjo(&A->pPalavra[(*i)])){
            (*i)++;
        }
        while (primeiraLetraArranjo(& pivo) < primeiraLetraArranjo(&A->pPalavra[(*j)]))
            (*j)--;
        if ((*i) <= (*j)){
            aux = A->pPalavra[*i];
            A->pPalavra[*i] = A->pPalavra[*j];
            A->pPalavra[*j] = aux;
            (*i)++;
            (*j)--;
        }
    }
    while ((*i) <= (*j));

}


