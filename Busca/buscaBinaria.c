#include <stdio.h>

int buscaBinaria(int array[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (array[meio] == valor)
            return meio;

        if (array[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}

int buscaBinariaRecursiva(int array[], int inicio, int fim, int valor) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (array[meio] == valor)
            return meio;

        if (array[meio] < valor)
            return buscaBinariaRecursiva(array, meio + 1, fim, valor);
        else
            return buscaBinariaRecursiva(array, inicio, meio - 1, valor);
    }

    return -1;
}

void main() {
    int array[] = {2, 5, 7, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valor = 16;
    int valor1 = 9;

    int indice = buscaBinaria(array, tamanho, valor);
    int indiceComRecursividade = buscaBinariaRecursiva(array, 0, tamanho - 1, valor1);

    if (indice != -1)
        printf("O valor %d foi encontrado no índice %d.\n", valor, indice);
    else
        printf("O valor %d não foi encontrado no array.\n", valor);

    if (indiceComRecursividade != -1){
        printf("O valor %d foi encontrado no índice %d.\n", valor, indiceComRecursividade);
    } else {
        printf("O valor %d não foi encontrado no array.\n", valor);
    }

}


