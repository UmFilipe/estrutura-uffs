#include <stdio.h>

void main(){
    float salario = 1, totalSalario, mediaSalario, mediaFilhos, filhos, totalFilhos, contador;

    while (salario > 0){
        printf("Digite o seu salario\n");
        scanf("%f", &salario);

        if (salario < 0){
            mediaSalario = totalSalario/contador;
            mediaFilhos = totalFilhos/contador;
            printf("A média de salários e de %.2f e a media de filhos e de %.2f\n", mediaSalario, mediaFilhos);
            break;
        } 

        printf("Digite quantos filhos voce tem\n");
        scanf("%f", &filhos);

        if (salario > 0){
            totalSalario += salario;
            totalFilhos += filhos;
            contador += 1;
    }


}

}