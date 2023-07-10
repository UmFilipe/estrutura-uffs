#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *esquerda, *direita;
} No;

typedef struct {
    No *raiz;
} ArvB;

No *inserir(No *raiz, int valor){
    if(raiz == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->dado = valor;
        novo->esquerda = NULL;
        novo->direita= NULL;

        return novo;
    } else {
        if(valor <= raiz->dado){
            raiz->esquerda = inserir(raiz->esquerda, valor);
        } else if (valor > raiz->dado){
            raiz->direita = inserir(raiz->direita, valor);
        }
        return raiz;
    }
}

No *remover(No *raiz, int chave){
    if(raiz == NULL){
        printf("Valor não encontrado\n");
        return NULL;
    } else {
        if(raiz->dado == chave){
            // remoção quando não tem filhos
            if(raiz->esquerda == NULL && raiz->direita == NULL){
                free(raiz);
                return NULL;
            } else {
                // remoção quando tem apenas um filho
                if(raiz->esquerda == NULL || raiz->direita == NULL){
                    No *aux;
                    if(raiz->esquerda != NULL){
                        aux = raiz->esquerda;
                    } else {
                        aux = raiz->direita;
                    }
                    free(raiz);
                    return aux;
                // remoção quando tem dois filhos
                } else {
                    No *aux = raiz->esquerda;
                    while(aux->direita != NULL){
                        aux = aux->direita;
                    }
                    raiz->dado = aux->dado;
                    aux->dado = chave;
                    raiz->esquerda = remover(raiz->esquerda, chave);
                    return raiz;
                }
            }
        } else {
            // acha o nó correto utilizando recursividade
            if(chave < raiz->dado){
                raiz->esquerda = remover(raiz->esquerda, chave);
            } else {
                raiz->direita = remover(raiz->direita, chave);
            }
            return raiz;
        }
    }
}

int buscar(No *raiz, int chave){
    if(raiz == NULL){
        return -99999;
    } else {
        if(raiz->dado == chave){
            return raiz->dado;
        } else {
            if(chave < raiz->dado){
                return buscar(raiz->esquerda, chave);
            } else {
                return buscar(raiz->direita, chave);
            }
        }
    }
}

int tamanho(No *raiz){
    if (raiz == NULL){
        return 0;
    } else {
        return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
    }
    
}

void imprimir(No *raiz){
    if(raiz != NULL){
        imprimir(raiz->esquerda);
        printf("%d ", raiz->dado); 
        imprimir(raiz->direita);
    }
}

int main(){
    ArvB arv;
    int valor, opcao;

    do {
        printf("\n0 - Sair\n");
        printf("1 - Inserir\n");
        printf("2 - Buscar\n");
        printf("3 - Imprimir\n");
        printf("4 - Remover\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 0:
                printf("Encerrando\n");
                break;
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                arv.raiz = inserir(arv.raiz, valor);
                break;
            case 2:
                printf("Digite um valor que gostaria de achar na árvore: ");
                scanf("%d", &valor);
                printf("Resultado da busca: %d\n", buscar(arv.raiz, valor));   
                break;
            case 3:
                imprimir(arv.raiz);
                printf("\nTamanho: %d", tamanho(arv.raiz));
                break;
            case 4:
                printf("Digite o valor que queira remover: ");
                scanf("%d", &valor);
                arv.raiz = remover(arv.raiz, valor);
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    } while(opcao != 0);
    
    return 0;
}
