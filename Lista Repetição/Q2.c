#include <stdio.h>

void main(){
    int x, y, resultado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);


    for (int i = 1; i <= x; i++){
        resultado += y;
    }

    printf("O resultado da multiplicacao entre %d e %d = %d\n", x, y, resultado);

}