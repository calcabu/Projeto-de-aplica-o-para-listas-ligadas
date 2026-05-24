#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inicializa_lista(t_lista *pl) {
    pl->primeiro = NULL;
}

int lista_vazia(t_lista *pl) {
    return pl->primeiro == NULL;
}

void insere_inicio(int dado, t_lista *pl) {
    t_no *novo = constroi_no(dado);
    if (novo != NULL) {
        novo->proximo = pl->primeiro;
        pl->primeiro = novo;
    }
}

void insere_fim(int dado, t_lista *pl) {
    t_no *novo = constroi_no(dado);
    if (novo != NULL) {
        if (lista_vazia(pl)) {
            pl->primeiro = novo;
        } else {
            t_no *atual = pl->primeiro;
            while (atual->proximo != NULL) {
                atual = atual->proximo;
            }
            atual->proximo = novo;
        }
    }
}

int remove_inicio(t_lista *pl, int *dado) {
    if (lista_vazia(pl)) {
        return 0;
    }
    t_no *removido = pl->primeiro;
    *dado = removido->dado;
    pl->primeiro = removido->proximo;
    free(removido);
    return 1;
}

void exibe_lista(t_lista *pl) {
    t_no *atual = pl->primeiro;
    while (atual != NULL) {
        if (atual->dado >= 100) {
            printf("VIP%d ", atual->dado);
        } else {
            printf("%d ", atual->dado);
        }
        atual = atual->proximo;
    }
    printf("\n");
}

int tamanho_lista(t_lista *pl) {
    int cont = 0;
    t_no *atual = pl->primeiro;
    while (atual != NULL) {
        cont++;
        atual = atual->proximo;
    }
    return cont;
}