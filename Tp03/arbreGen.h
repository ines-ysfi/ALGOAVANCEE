#ifndef ARBREGEN_H
#define ARBREGEN_H


typedef struct Noeud Noeud;
typedef struct Cellule Cellule;

// Liste chaînée pour enfants (arbre) ou voisins (graphe)
struct Cellule {
    Noeud *voisin;       // enfant ou voisin
    Cellule *suivant;
};

// Nœud générique pour arbre ou graphe
struct Noeud {
    char val;            // valeur du nœud
    int num;             // numéro unique
    Cellule *listeAdj;   // liste des enfants ou voisins
    int visite;          // 0=non visité, 1=visité
};

// Fonctions
Noeud* creerNoeud(char v);
void ajouterLien(Noeud *n, Noeud *c);
void parcoursPrefixe(Noeud *n);   // pour arbre n-aire
void DFS(Noeud *n);                // pour graphe
void reinitialiserVisite(Noeud **noeuds, int n); // remise à zéro du champ visite

#endif

