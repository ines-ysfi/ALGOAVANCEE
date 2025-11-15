#ifndef LISTE_H
#define LISTE_H

// ----- Structure point -----
typedef struct {
    int x;
    int y;
} point;

// ----- Cellule (liste doublement chaînée) -----
typedef struct cellule {
    point p;
    struct cellule *prev;
    struct cellule *next;
} cellule;


// ----- Prototypes -----

cellule *NouvCel(point p);

void InsererCellule(int pl, cellule *cel, cellule **liste);

void SupprimeCellule(int pl, cellule **liste);

void Afficher(cellule *liste);

void LibererListe(cellule *liste);

#endif
