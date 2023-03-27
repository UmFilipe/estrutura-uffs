#include <stdio.h>

void main(){
    int x = 1;
    float porcentagem, entre10e20 = 0, total = 0;

    while (x > 0){
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x >= 10 && x <= 20){
            entre10e20 += 1;
            total += 1;
        } else if (x > 0 && x <= 9){
            total += 1;
        } else if (x > 20){
            total += 1;
        } else if (x <= 0){
            porcentagem = (entre10e20/total) * 100;
            printf("Porcentagem de numeros entre 10 e 20: %.2f", porcentagem);
    }
}
}