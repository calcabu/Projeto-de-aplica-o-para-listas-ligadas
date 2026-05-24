#ifndef LISTA_H
#define LISTA_H

#include "no.h"

typedef struct {
    t_no *primeiro;
} t_lista;

void inicializa_lista(t_lista *pl);
int lista_vazia(t_lista *pl);
void insere_inicio(int dado, t_lista *pl);
void insere_fim(int dado, t_lista *pl);
int remove_inicio(t_lista *pl, int *dado);
void exibe_lista(t_lista *pl);
int tamanho_lista(t_lista *pl);

#endif