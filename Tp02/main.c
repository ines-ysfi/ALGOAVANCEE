#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main() {
    int n;
    char filename[100];

    printf("Nom du fichier contenant le graphe : ");
    scanf("%s", filename);

    int **adj = chargeGraphe(&n, filename);

    // Affichage de la matrice pour vérification
    printf("\nMatrice d'adjacence (%d sommets) :\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", adj[i][j]);
        printf("\n");
    }

    // Exécution Welsh-Powell
    welshPowell(adj, n);

    freeMatrix(adj, n);
    return 0;
}
