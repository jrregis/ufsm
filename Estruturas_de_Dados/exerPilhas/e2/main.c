#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha *p;
    float topo;
    p = pilha_cria();

    /*pilha_push(p, 4);
    pilha_push(p, 3);
    pilha_pop(p);
    pilha_push(p, 8);
    pilha_pop(p);
    imprime(p);*/

    /*pilha_push(p, 3);
    pilha_pop(p);
    pilha_pop(p);
    pilha_push(p, 4);
    imprime(p);*/

    pilha_push(p, 1);
    pilha_pop(p);
    pilha_push(p, 2);
    pilha_push(p, 3);
    pilha_push(p, 4);
    pilha_push(p, 5);
    pilha_push(p, 6);
    pilha_push(p, 7);
    pilha_push(p, 8);
}