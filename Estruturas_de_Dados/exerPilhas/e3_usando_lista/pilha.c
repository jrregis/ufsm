#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <stdbool.h>

bool pilha_vazia(pilha *p)
{
    return (p->prim == NULL);
}

pilha *pilha_cria(void)
{
    pilha *p = (pilha *)malloc(sizeof(pilha));
    p->prim = NULL;
    return p;
}

void pilha_push(pilha *p, float v)
{
    lista *n = (lista *)malloc(sizeof(lista));

    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}

void pilha_pop(pilha *p)
{
    lista *t;

    if (pilha_vazia(p))
    {
        printf("PILHA VAZIA!\n");
        exit(1);
    }

    t = p->prim;
    p->prim = t->prox;
    free(t);
}

void imprime(pilha *p)
{
    lista *l;
    for (l = p->prim; l != NULL; l = l->prox)
    {
        printf("%f\n", l->info);
    }
}

float topo(pilha *p)
{
    float topo;
    topo = p->prim->info;

    return topo;
}

int num_obj(pilha *p)
{
    lista *l;
    int num = 0;

    for (l = p->prim; l != NULL; l = l->prox)
        num++;
    return num;
}
