#ifndef ABB_H
#define ABB_H
#include <stdio.h>
#include <stdlib.h>

typedef struct abb
{
    int v;
    struct abb *dir;
    struct abb *esq;
} abb;

abb *cria_vazia(void);
abb *insere(abb *a, int v);
void decrescente(abb *a);

#endif