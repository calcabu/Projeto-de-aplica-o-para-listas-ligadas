#ifndef NO_H
#define NO_H

typedef struct no {
    int dado;
    struct no *proximo;
} t_no;

t_no *constroi_no(int dado);

#endif