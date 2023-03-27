#include <stdio.h>

void main(){
    int posicao;

    printf("Insira a posição do competidor\n");
    scanf("%d", &posicao);

    if (posicao >= 1 && posicao <= 5){
        printf("O competidor está no Top 5\n");
    } else if (posicao >= 6 && posicao <= 10){
        printf("O competidor está no Top 10\n");
    } else if (posicao >= 11 && posicao <= 20){
        printf("O competidor está no Top 20\n");
    } else if (posicao >= 21 && posicao <= 30){
        printf("O competidor está no Top 30\n");
    } else {
        printf("O competidor está no Top 100\n");
    }
}