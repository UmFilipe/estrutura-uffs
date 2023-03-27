#include <stdio.h>

void main(){
    int x, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++){
        if (x == 0){
            fatorial = 1;
        } else{
            fatorial *= i;
        } 
        
    }

    printf("Fatorial de %d = %d\n", x, fatorial);
}