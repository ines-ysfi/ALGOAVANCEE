#ifndef ARBRE_H
#define ARBRE_H

// Structure d'un noeud d'arbre binaire
typedef struct noeud {
    char val;               // caractère stocké
    int num;                // numéro de création
    struct noeud *filsG;    // fils gauche
    struct noeud *filsD;    // fils droit
} Noeud;


// Prototypes
Noeud *nouvNoeud(char c);
Noeud *rechercheNoeud(Noeud *n, int numNoeud);
void insererFG(Noeud *nouv, Noeud *arbre, int numParent);
void insererFD(Noeud *nouv, Noeud *arbre, int numParent);  // optionnel
void parcoursPrefixe(Noeud *n);
void parcoursInfixe(Noeud *n);
void parcoursPostfixe(Noeud *n);

#endif
