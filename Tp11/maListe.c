#include <stdio.h>
#include "liste.h"

int main() {

    cellule *liste = NULL;

    point p1 = {0,0}, p2 = {1,2}, p3 = {3,4}, p4 = {5,6};

    InsererCellule(0, NouvCel(p1), &liste);
    InsererCellule(0, NouvCel(p2), &liste);
    InsererCellule(1, NouvCel(p3), &liste);
    InsererCellule(2, NouvCel(p4), &liste);

    printf("\n--- Liste initiale ---\n");
    Afficher(liste);

    printf("\nSuppression de la cellule à la position 1\n");
    SupprimeCellule(1, &liste);

    printf("\n--- Liste après suppression ---\n");
    Afficher(liste);

    LibererListe(liste);

    return 0;
}
