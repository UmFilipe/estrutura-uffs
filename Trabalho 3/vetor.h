#include <stdio.h>
#include <math.h>

struct tv2d{
   int p1; 
   int p2;
};

typedef struct tv2d v2d;

v2d atribuiValor(int p1, int p2){
    v2d v;

    v.p1 = p1;
    v.p2 = p2;

    return v;
}

void somaEsubtracaoDeVetores(){

    printf("SOMA E SUBTRAÇÃO DE VETORES\n\n");

    int a, b, c, d;

    printf("Insira a primeira posição do vetor 1: ");
    scanf("%d", &a);

    printf("Insira a segunda posição do vetor 1: ");
    scanf("%d", &b);

    printf("Insira a primeira posição do vetor 2: ");
    scanf("%d", &c);

    printf("Insira a segunda posição do vetor 2: ");
    scanf("%d", &d);

    v2d v1 = atribuiValor(a, b);
    v2d v2 = atribuiValor(c, d);

    int v1Soma = v1.p1 + v1.p2;
    int v2Soma = v2.p1 + v2.p2;
    
    int v1Sub = v1.p1 - v1.p2;
    int v2Sub = v2.p1 - v2.p2;

    printf("Soma do vetor 1: %d\n", v1Soma);
    printf("Soma do vetor 2: %d\n", v2Soma);

    printf("Subtração do vetor 1: %d\n", v1Sub);
    printf("Subtração do vetor 2: %d\n", v2Sub);
    printf("-----------------------------------------\n");
}

void moduloEprodutoDeVetor(){

    printf("MODULO E PRODUTO INTERNO:\n\n");

    int a, b;

    printf("Insira a primeira posição do vetor: ");
    scanf("%d", &a);

    printf("Insira a segunda posição do vetor: ");
    scanf("%d", &b);

    v2d v = atribuiValor(a, b);

    double valor = (v.p1 * v.p1) + (v.p2 * v.p2);
    double modulo = sqrt(valor);

    int produto = (v.p1 * v.p1) + (v.p2 * v.p2);

    printf("Módulo do vetor: %.2lf\n", modulo);
    printf("O produto interno deste vetor é: %d\n", produto);
    printf("-----------------------------------------\n");
}

void imprimeVetor(v2d vetor){
    printf("<%d, %d>\n", vetor.p1, vetor.p2);
}