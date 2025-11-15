#include <stdio.h>
#include <stdlib.h>
#include "arbreGen.h"

// compteur global pour numéroter les nœuds
static int compteur = 1;

// Créer un nœud
Noeud* creerNoeud(char v) {
    Noeud *n = malloc(sizeof(Noeud));
    if (!n) { printf("Erreur allocation\n"); exit(1); }

    n->val = v;
    n->num = compteur++;
    n->listeAdj = NULL;
    n->visite = 0;
    return n;
}

// Ajouter un enfant (arbre) ou un voisin (graphe)
void ajouterLien(Noeud *n, Noeud *c) {
    if (!n || !c) return;
    Cellule *cell = malloc(sizeof(Cellule));
    if (!cell) { printf("Erreur allocation\n"); exit(1); }
    cell->voisin = c;
    cell->suivant = n->listeAdj;
    n->listeAdj = cell;
}

// Parcours préfixe pour arbre n-aire
void parcoursPrefixe(Noeud *n) {
    if (!n) return;
    printf("%c ", n->val);

    Cellule *tmp = n->listeAdj;
    while (tmp) {
        parcoursPrefixe(tmp->voisin);
        tmp = tmp->suivant;
    }
}

// DFS pour graphe avec marquage des sommets visités
void DFS(Noeud *n) {
    if (!n || n->visite) return;

    n->visite = 1;
    printf("%c ", n->val);

    Cellule *tmp = n->listeAdj;
    while (tmp) {
        DFS(tmp->voisin);
        tmp = tmp->suivant;
    }
}

void reinitialiserVisite(Noeud **noeuds, int n) {
    for (int i=0; i<n; i++) {
        noeuds[i]->visite = 0;
    }
}
