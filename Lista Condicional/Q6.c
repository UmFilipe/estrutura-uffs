#include <stdio.h>

void main(){
    int idade;

    printf("Informe sua idade\n");
    scanf("%d", &idade);

    if (idade < 16){
        printf("Você não pode votar\n");
    } else if (idade >= 16 && idade <= 18){
        printf("Voto facultativo\n");
    } else if (idade > 18){
        printf("Voto obrigatório\n");
    }
}