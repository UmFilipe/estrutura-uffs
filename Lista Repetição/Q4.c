#include <stdio.h>

void main(){
    int x, y, resultado = 0;
    char operacao;

    while (operacao != '@'){
        printf("Digite o primeiro numero: ");
        scanf("%d", &x);

        printf("Digite o segundo numero: ");
        scanf("%d", &y);

        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c", &operacao);

        if (operacao == '+'){
            resultado = x + y;
        } else if(operacao == '-'){
            resultado = x - y;
        } else if (operacao == '*'){
            resultado = x * y;
        } else if(operacao == '/'){
            resultado = x / y;
        } else if (operacao == '@'){
            break;
        }

        printf("Resultado = %d \n", resultado);

    }
}