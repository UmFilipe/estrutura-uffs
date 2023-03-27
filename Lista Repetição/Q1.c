#include <stdio.h>

void main(){
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if (i == (x/2) + 1){
            printf("Metade\n");
        }
        printf("%d \n", i);
    }
}