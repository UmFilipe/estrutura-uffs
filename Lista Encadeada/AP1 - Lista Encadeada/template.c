#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct aluno {
    char matricula[10];
    char nome[40];
    float media;
    struct data nascimento;
    struct aluno *next;
};

typedef struct aluno Aluno;

void inserirNaLista(Aluno **head) {
    Aluno *novo = malloc(sizeof(Aluno));
    Aluno *ultimo = *head;
    
    char matricula[10];
    char nome[40];
    char nascimento[11];
    int dia, mes, ano;
    float media;
    
    scanf("%s", matricula);
    strcpy(novo->matricula, matricula);

    scanf("%s", nome);
    strcpy(novo->nome, nome);

    scanf("%s", nascimento);
    sscanf(nascimento, "%d/%d/%d", &dia, &mes, &ano);
    novo->nascimento.dia = dia;
    novo->nascimento.mes = mes;
    novo->nascimento.ano = ano;

    scanf("%f", &media);
    novo->media = media;
    novo->next = NULL;
    
    if (*head == NULL) {
        *head = novo;
        return;
    }
    
    while(ultimo->next != NULL) 
        ultimo = ultimo->next;
        ultimo->next = novo;
        return;
}

void removerDaLista(Aluno **head) {
    Aluno *aux = *head;
    Aluno *ant = NULL;
    char matricula[10];

    scanf("%s", matricula);

    if(*head == NULL) {
        printf("Lista Vazia!\n");
        return;
    }

    while(aux != NULL) {
        if (strcmp(aux->matricula, matricula) == 0) {
            if (ant == NULL) {
                *head = aux->next;
            } else {
                ant->next = aux->next;
            }
            Aluno *deletar = aux;
            aux = aux->next;
        } else {
            ant = aux;
            aux = aux->next;
        }
    }
}

void imprimirLista(Aluno *lista) {
    if (lista == NULL) {
        printf("Lista Vazia!\n");
        return;
    }
    while (lista != NULL) {
        printf("%s, %s, %d/%d/%d, %.2f\n", lista->matricula, lista->nome, lista->nascimento.dia, lista->nascimento.mes, lista->nascimento.ano, lista->media);
        lista = lista->next;
    }
}

void imprimeListaAoContrario(Aluno *lista) {
    if (lista == NULL) {
        printf("Lista Vazia!\n");
        return;
    }

    Aluno *primeiro = lista;
    lista = lista->next;

    if (lista != NULL) {
        imprimeListaAoContrario(lista);
    }

    printf("%s, %s, %d/%d/%d, %.2f\n", primeiro->matricula, primeiro->nome, primeiro->nascimento.dia, primeiro->nascimento.mes, primeiro->nascimento.ano, primeiro->media);
}

void contador(Aluno *lista) {
    int contador = 0;
    while (lista != NULL) {
        contador++;
        lista = lista->next;
    }
    printf("%d\n", contador);
}


void main() {
    Aluno *lista = NULL;

    int opcao = -1;

    while (opcao != 0) {
        scanf("%d", &opcao);

        if (opcao == 1) {
            inserirNaLista(&lista);
        } else if (opcao == 2) {
            removerDaLista(&lista);
        } else if (opcao == 3) {
            imprimirLista(lista);
        } else if (opcao == 4) {
            imprimeListaAoContrario(lista);
        } else if (opcao == 5) {
            contador(lista);
        } else if (opcao != 0) {
            printf("Opção inválida!\n");
        }
    }

    printf("-\n");
}
