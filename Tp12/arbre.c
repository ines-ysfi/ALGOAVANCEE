#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"


// compteur global pour numéroter les noeuds automatiquement
static int compteur = 1;

// Création d'un nouveau noeud 
Noeud *nouvNoeud(char c) {
    Noeud *n = malloc(sizeof(Noeud));
    if (!n) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }

    n->val = c;
    n->num = compteur++;
    n->filsG = NULL;
    n->filsD = NULL;

    return n;
}


//Recherche d'un noeud par numéro
Noeud *rechercheNoeud(Noeud *n, int numNoeud) {

    if (n == NULL)
        return NULL;

    if (n->num == numNoeud)
        return n;

    Noeud *tmp = rechercheNoeud(n->filsG, numNoeud);
    if (tmp != NULL)
        return tmp;

    return rechercheNoeud(n->filsD, numNoeud);
}


// Insertion en fils gauche
void insererFG(Noeud *nouv, Noeud *arbre, int numParent) {

    Noeud *parent = rechercheNoeud(arbre, numParent);
    if (parent == NULL) {
        printf("Impossible : parent %d introuvable\n", numParent);
        return;
    }

    // si le parent possède déjà un fils gauche :
    // -> il devient le fils gauche du NOUVEAU noeud
    if (parent->filsG != NULL)
        nouv->filsG = parent->filsG;

    parent->filsG = nouv;
}


// Insertion en fils droit
void insererFD(Noeud *nouv, Noeud *arbre, int numParent) {

    Noeud *parent = rechercheNoeud(arbre, numParent);
    if (parent == NULL) {
        printf("Impossible : parent %d introuvable\n", numParent);
        return;
    }

    if (parent->filsD != NULL)
        nouv->filsD = parent->filsD;

    parent->filsD = nouv;
}


//Parcours préfixe
// racine → sous-arbre gauche → sous-arbre droit
void parcoursPrefixe(Noeud *n) {
    if (n == NULL)
        return;

    printf("%c ", n->val);   // visite du noeud
    parcoursPrefixe(n->filsG);
    parcoursPrefixe(n->filsD);
}



// Parcours infixe
// sous-arbre gauche → racine → sous-arbre droit
void parcoursInfixe(Noeud *n) {
    if (n == NULL)
        return;

    parcoursInfixe(n->filsG);
    printf("%c ", n->val);   // visite du noeud
    parcoursInfixe(n->filsD);
}


// Parcours post-fixe
// sous-arbre gauche → sous-arbre droit → racine
void parcoursPostfixe(Noeud *n) {
    if (n == NULL)
        return;

    parcoursPostfixe(n->filsG);
    parcoursPostfixe(n->filsD);
    printf("%c ", n->val);   // visite du noeud
}