#include <stdio.h>

void main()
{
    int horas;
    printf("Informe o número de horas trabalhadas\n");
    scanf("%d", &horas);

    float valor;
    printf("Informe o valor das horas trabalhadas\n");
    scanf("%f", &valor);

    float salario= horas * valor;
     
    if (horas > 200) 
    {
        salario *= 1.05;
        printf("O salário final é: %.2f\n", salario);

    } else {
        printf("O salário final é: %.2f\n", salario);
    }

}