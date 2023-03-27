#include <stdio.h>

void main(){
    float antonio = 1.5, carlos = 1.1;
    int anos = 0;

    while (antonio >= carlos){
        antonio += 0.02;
        carlos += 0.03;
        anos += 1;
    }

    printf("Foram necessarios %d anos para que Carlos chegasse a altura de Antonio\n", anos);
}