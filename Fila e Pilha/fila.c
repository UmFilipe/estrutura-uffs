#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no* proximo;
} No;

No *inserir(No *fila, int valor) {
    No* novo = malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: falha na alocação de memória.\n");
        return fila;
    }
    novo->dado = valor;
    novo->proximo = NULL;

    if (fila == NULL) {
        fila = novo;
    } else {
        No *aux = fila;
        while (aux->proximo != NULL) {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }

    return fila;
}

No *remover(No *fila) {
    if (fila == NULL) {
        printf("Fila vazia.\n");
        return NULL;
    }

    No *remover = fila;
    fila = fila->proximo;
    remover->proximo = NULL;
    free(remover);

    return fila;
}

void imprimir(No *fila) {
    if (fila == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    No *atual = fila;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

void main() {
    No *fila = NULL;
    int opcao, valor;

    do {
        printf("0 - Sair\n");
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Imprimir\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                fila = inserir(fila, valor);
                break;
            case 2:
                fila = remover(fila);
                break;
            case 3:
                imprimir(fila);
                break;
        }

    } while (opcao != 0);

}
