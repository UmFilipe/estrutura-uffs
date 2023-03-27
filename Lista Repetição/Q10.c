#include <stdio.h>

void main(){
    float nota, totalNotas = 0, media;
    int matricula = 1;

    while (matricula != 0){

        printf("Informe a matricula do aluno: ");
        scanf("%d", &matricula);

        if (matricula == 0){
              break;
        }

        for (int i = 1; i <= 10; i++){

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        totalNotas += nota;
        
    }
    media = totalNotas / 10;
    printf("Media do aluno com matricula %d = %.2f\n", matricula, media);
}
    
}