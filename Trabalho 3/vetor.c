#include <stdio.h>
#include "vetor.h"

void main(){

    somaEsubtracaoDeVetores();
    moduloEprodutoDeVetor();

    int a, b;

    printf("IMPRESSÃO DE VETOR QUALQUER\n\n");

    printf("Insira a primeira posição do vetor: ");
    scanf("%d", &a);

    printf("Insira a segunda posição do vetor: ");
    scanf("%d", &b);

    v2d vetor = atribuiValor(a, b);

    imprimeVetor(vetor);

}