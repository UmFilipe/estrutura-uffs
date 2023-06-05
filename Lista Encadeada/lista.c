#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

typedef struct{
    No *inicio;
    int tam;
} Lista;

void criaLista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

void inserirNoInicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));

    novo->valor = num;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}

void inserirNoFinal(Lista *lista, int num){
    No *novo = malloc(sizeof(No));
    No *aux = malloc(sizeof(No));

    novo->valor = num;
    novo->proximo = NULL;

    if(lista->inicio == NULL){
        lista->inicio = novo;
    } else {
        aux = lista->inicio;

        while(aux->proximo){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    lista->tam++;
}

void inserirNoMeio(Lista *lista, int num, int anterior){
    No *novo = malloc(sizeof(No));
    No *aux = malloc(sizeof(No));

    novo->valor = num;
    
    if(lista->inicio == NULL){
        novo->proximo = NULL;
        lista->inicio = novo;
    } else {
        aux = lista->inicio;
        while(aux->valor != anterior && aux->proximo){
            aux = aux->proximo;
        }
        novo->proximo = aux->proximo;
        aux->proximo = novo;
    }
    lista->tam++;
}

void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("\nLista: ");
    while(no){
        printf("%d", no->valor);
        printf("%d", lista.tam);
        no = no->proximo;
    }
    printf("\n\n");
}

void main(){
    Lista lista;
    criaLista(&lista);
    int opcao, valor, anterior;

    while(opcao != 5){
        printf("1 - Inserir no início\n");
        printf("2 - Inserir no meio\n");
        printf("3 - Inserir no final\n");
        printf("4 - Imprimir\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Insira o valor a ser colocado na lista: ");
            scanf("%d", &valor);

            inserirNoInicio(&lista, valor);
        } else if(opcao == 2){
            printf("Insira o valor a ser colocado na lista: ");
            scanf("%d", &valor);
            printf("Insira o valor de referência: ");
            scanf("%d", &anterior);

            inserirNoMeio(&lista, valor, anterior);
        } else if(opcao == 3){
            printf("Insira o valor a ser colocado na lista: ");
            scanf("%d", &valor);
            inserirNoFinal(&lista, valor);
        } else if (opcao == 4){
            imprimir(lista);
        } else {
            printf("Opção inválida!");
        }
        
    }
}