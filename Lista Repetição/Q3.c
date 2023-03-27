#include <stdio.h>

void main(){
    int x, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++){
        resultado += i;
    }
    printf("Resultado = %d\n", resultado);
}