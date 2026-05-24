#include <stdlib.h>
#include "no.h"

t_no *constroi_no(int dado) {
    t_no *novo = (t_no *)malloc(sizeof(t_no));
    if (novo != NULL) {
        novo->dado = dado;
        novo->proximo = NULL;
    }
    return novo;
}