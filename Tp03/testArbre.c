#include <stdio.h>
#include "arbreGen.h"

int main() {
    Noeud *Fr = creerNoeud('0');
    Noeud *Es = creerNoeud('1');
    Noeud *Po = creerNoeud('2');
    Noeud *An = creerNoeud('3');
    Noeud *It = creerNoeud('4');
    Noeud *Au = creerNoeud('5');
    Noeud *Su = creerNoeud('6');
    Noeud *Al = creerNoeud('7');
    Noeud *Lu = creerNoeud('8');
    Noeud *Be = creerNoeud('9');
    Noeud *PB = creerNoeud('A');

    Noeud *pays[] = {Fr, Es, Po, An, It, Au, Su, Al, Lu, Be, PB};

    // France
    ajouterLien(Fr, Es); ajouterLien(Es, Fr);
    ajouterLien(Fr, An); ajouterLien(An, Fr);
    ajouterLien(Fr, It); ajouterLien(It, Fr);
    ajouterLien(Fr, Su); ajouterLien(Su, Fr);
    ajouterLien(Fr, Al); ajouterLien(Al, Fr);
    ajouterLien(Fr, Lu); ajouterLien(Lu, Fr);
    ajouterLien(Fr, Be); ajouterLien(Be, Fr);

    // Espagne
    ajouterLien(Es, Po); ajouterLien(Po, Es);
    ajouterLien(Es, An); // déjà fait An-Es

    // Italie
    ajouterLien(It, Su); ajouterLien(Su, It);
    ajouterLien(It, Au); ajouterLien(Au, It);

    // Autriche
    ajouterLien(Au, Su); // déjà fait
    ajouterLien(Au, Al); ajouterLien(Al, Au);


    // Allemagne
    ajouterLien(Al, Lu); ajouterLien(Lu, Al);
    ajouterLien(Al, Be); ajouterLien(Be, Al);
    ajouterLien(Al, PB); ajouterLien(PB, Al);

    // Belgique
    ajouterLien(Be, PB); ajouterLien(PB, Be);


    printf("DFS à partir de la France : ");
    DFS(Fr);
    printf("\n"); 

}
