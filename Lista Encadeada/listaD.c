#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *anterior;
    struct No *proximo;
} No;

No *criarNo(int dado) {
    No *novo = malloc(sizeof(No));
    novo->dado = dado;
    novo->anterior = NULL;
    novo->proximo = NULL;
    return novo;
}

void inserirNoInicio(No **inicio, int dado) {
    No *novo = criarNo(dado);
    if (*inicio == NULL) {
        *inicio = novo;
    } else {
        novo->proximo = *inicio;
        (*inicio)->anterior = novo;
        *inicio = novo;
    }
}

void inserirNoMeio(No *posicao, int dado) {
    if (posicao == NULL) {
        printf("Posicao invalida.\n");
        return;
    }
    No *novo = criarNo(dado);
    novo->anterior = posicao;
    novo->proximo = posicao->proximo;
    if (posicao->proximo != NULL) {
        posicao->proximo->anterior = novo;
    }
    posicao->proximo = novo;
}

void inserirNoFim(No **inicio, int dado) {
    No *novo = criarNo(dado);
    if (*inicio == NULL) {
        *inicio = novo;
    } else {
        No *atual = *inicio;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
        novo->anterior = atual;
    }
}

void exibirLista(No *inicio) {
    No *atual = inicio;
    if (inicio == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    printf("A lista é: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

void exibirListaReversa(No *inicio) {
    No *atual = inicio;
    if (inicio == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
    printf("A lista em ordem reversa é: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->anterior;
    }
    printf("\n");
}

int main() {
    No *inicio = NULL;
    inserirNoInicio(&inicio, 3);
    inserirNoInicio(&inicio, 1);
    inserirNoFim(&inicio, 5);
    inserirNoMeio(inicio->proximo, 2);
    exibirLista(inicio);
    exibirListaReversa(inicio);

    return 0;
}
