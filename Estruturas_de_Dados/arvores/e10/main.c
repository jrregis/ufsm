#include "abb.h"

int main()
{
    abb *a = cria_vazia();
    a = insere(a, 5);
    a = insere(a, 1);
    a = insere(a, 3);
    a = insere(a, 4);
    a = insere(a, 7);
    a = insere(a, 2);
    a = insere(a, 8);

    imprime(a);

    a = inverter(a);

    printf("\n\n");

    imprime(a);
}