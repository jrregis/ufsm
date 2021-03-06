#ifndef TREE_H
#define TREE_H
#include "lse.h"

typedef struct Node_tree
{
    Car *c;
    struct Node_tree *left;
    struct Node_tree *right;

} Node_tree;

Node_tree *create(void);
Node_tree *destroyTree(Node_tree *t);
Node_tree *insertByLicense(Node_tree *t, Car *c);
Node_tree *insertByBrand(Node_tree *t, Car *c);
Node_tree *insertByYear(Node_tree *t, Car *c);
Node_tree *search(Node_tree *t, char license[8]);
Node_tree *removeNodeByLicense(Node_tree *t, Car *c);
Node_tree *removeNodeByBrand(Node_tree *t, Car *c);
Node_tree *removeNodeByYear(Node_tree *t, Car *c);
void showSimetricByLicense(Node_tree *t);
void showSimetricByBrand(Node_tree *t);
void showSimetricByYear(Node_tree *t);

#endif