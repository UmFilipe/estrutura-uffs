#include <stdio.h>

void main(){
    int horaInicio, horaFim, duracao;

    printf("Insira a hora de início do evento\n");
    scanf("%d", &horaInicio);

    printf("Insira a hora do final do evento\n");
    scanf("%d", &horaFim);


    if (horaFim < horaInicio){
        duracao = horaFim + (24 - horaInicio);
    } else {
        duracao = horaFim - horaInicio;
    }
    printf("A duração do evento é de %d horas\n", duracao);

}