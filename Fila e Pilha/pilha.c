#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *proximo;
} No;

No *inserir(No *topo, int valor){
    No *novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->proximo = topo;
    return novo;
}

No* remover(No* topo) {
    if (topo == NULL) {
        printf("Pilha vazia.\n");
        return NULL;
    }

    No* remover = topo;
    topo = topo->proximo;
    remover->proximo = NULL;

    free(remover);
    return topo;
}

void imprimir(No *topo) {
    if (topo == NULL) {
        printf("Pilha vazia.\n");
        return;
    }

    No *atual = topo;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

void main(){
    No *topo = NULL;
    int valor, opcao;

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
                topo = inserir(topo, valor);
                break;
            case 2:
                topo = remover(topo);
                break;
            case 3:
                imprimir(topo);
                break;
        }

    } while (opcao != 0);
}