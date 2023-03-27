#include <stdio.h>

void main(){
    int n1, n2, n3, n4, negativos, positivos;

    printf("Insira o primeiro número\n");
    scanf("%d", &n1);

    printf("Insira o segundo número\n");
    scanf("%d", &n2);

    printf("Insira o terceiro número\n");
    scanf("%d", &n3);

    printf("Insira o quarto número\n");
    scanf("%d", &n4);

    if (n1 > 0){
        positivos += 1;
    } else {
        negativos += 1;
    }

    if (n2 > 0){
        positivos += 1;
    } else {
        negativos += 1;
    }

    if (n3 > 0){
        positivos += 1;
    } else {
        negativos += 1;
    }

    if (n4 > 0){
        positivos += 1;
    } else {
        negativos += 1;
    }

    printf("A quantidade de numeros positivos digitados foi: %d, e a quantidade de numeros negativos foi: %d\n", positivos, negativos);

}