#include "arbre.h"
#include <stdio.h>

int main() {
    // création de la racine
    Noeud *racine = nouvNoeud('A');

    // ajout de fils
    insererFG(nouvNoeud('B'), racine, 1); // B en fils gauche de A
    insererFD(nouvNoeud('C'), racine, 1); // C en fils droit de A
    insererFG(nouvNoeud('D'), racine, 2); // D en fils gauche de B
    insererFD(nouvNoeud('E'), racine, 2); // E en fils droit de B

    // tests des parcours
    printf("Parcours préfixe : ");
    parcoursPrefixe(racine);
    printf("\n");

    printf("Parcours infixe : ");
    parcoursInfixe(racine);
    printf("\n");

    printf("Parcours post-fixe : ");
    parcoursPostfixe(racine);
    printf("\n");

    return 0;
}
