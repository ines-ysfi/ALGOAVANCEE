#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// Création d'une cellule
cellule *NouvCel(point p) {
    cellule *c = malloc(sizeof(cellule));
    if (!c) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    c->p = p;
    c->prev = NULL;
    c->next = NULL;
    return c;
}

// Insertion après la position pl
void InsererCellule(int pl, cellule *cel, cellule **liste) {

    if (*liste == NULL) {
        *liste = cel;
        return;
    }

    cellule *temp = *liste;
    int i = 0;

    while (temp->next != NULL && i < pl) {
        temp = temp->next;
        i++;
    }

    cel->next = temp->next;
    cel->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = cel;

    temp->next = cel;
}

// Suppression à la position pl
void SupprimeCellule(int pl, cellule **liste) {
    if (*liste == NULL)
        return;

    cellule *temp = *liste;
    int i = 0;

    while (temp != NULL && i < pl) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *liste = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}

// Afficher la liste
void Afficher(cellule *liste) {
    printf("Liste des points : ");
    cellule *temp = liste;
    while (temp != NULL) {
        printf("(%d, %d) ", temp->p.x, temp->p.y);
        temp = temp->next;
    }
    printf("\n");
}

// Libération
void LibererListe(cellule *liste) {
    cellule *temp;
    while (liste != NULL) {
        temp = liste;
        liste = liste->next;
        free(temp);
    }
}
