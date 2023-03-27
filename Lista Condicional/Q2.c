#include <stdio.h>

void main(){

    float preco;
    printf("Insira o preço do produto\n");
    scanf("%f", &preco);

    int pagamento;
    printf("Insira a forma de pagamento (1 para à vista e 2 para à prazo)\n");
    scanf("%d", &pagamento);

    float valorFinal;
    valorFinal = preco;

    if (pagamento == 1){
        valorFinal *= 0.95;
        printf("O valor final do produto é: %.2f\n", valorFinal);
    } else {
        valorFinal *= 1.10;
        printf("O valor final do produto é: %.2f\n", valorFinal);
    }

}
