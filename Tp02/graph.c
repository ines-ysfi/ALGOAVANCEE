#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

// Fonction pour créer dynamiquement une matrice d'adjacence n x n
int** createMatrix(int n) {
    int **m = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        m[i] = malloc(n * sizeof(int));
    return m;
}

// Libère la mémoire allouée à la matrice
void freeMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++)
        free(matrix[i]);
    free(matrix);
}

// Algorithme de coloration de Welsh–Powell
void welshPowell(int **adj, int n) {
    int *degree = malloc(n * sizeof(int));   // tableau des degrés de chaque sommet
    int *color = calloc(n, sizeof(int));     // tableau des couleurs (0 = non colorié)
    int *order = malloc(n * sizeof(int));    // ordre des sommets (après tri décroissant)

    // --- Étape 1 : Calcul du degré de chaque sommet ---
    for (int i = 0; i < n; i++) {
        degree[i] = 0;
        for (int j = 0; j < n; j++)
            degree[i] += adj[i][j];  // somme de la ligne i = nombre de voisins
        order[i] = i; // initialement, l'ordre = [0, 1, 2, ..., n-1]
    }

    // --- Étape 2 : Tri des sommets par degré décroissant ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (degree[i] < degree[j]) {
                // on échange le degré
                int tmp = degree[i]; degree[i] = degree[j]; degree[j] = tmp;
                // on échange aussi l'ordre correspondant
                tmp = order[i]; order[i] = order[j]; order[j] = tmp;
            }
        }
    }

    // --- Étape 3 : Coloration des sommets ---
    int colorNum = 0; // numéro de couleur courant

    for (int i = 0; i < n; i++) {
        int v = order[i]; // sommet courant selon l'ordre trié

        if (color[v] != 0)
            continue; // déjà colorié, on passe

        colorNum++; // nouvelle couleur
        color[v] = colorNum;
        printf("Marquage du sommet %d avec couleur %d\n", v, colorNum);
        // On essaie d'attribuer la même couleur aux autres sommets non adjacents
        for (int k = i + 1; k < n; k++) {
            int u = order[k];
            if (color[u] == 0) {
                int adjacent = 0;

                // Vérifie si u est adjacent à un sommet déjà colorié avec cette couleur
                for (int j = 0; j < n; j++) {
                    if (color[j] == colorNum && adj[u][j]) {
                        adjacent = 1;
                        break;
                    }
                }

                if (!adjacent)
                    color[u] = colorNum; // on peut lui donner la même couleur
                    printf("Marquage du sommet %d avec couleur %d\n", u, colorNum);
            }
        }

    }

    // Affichage du résultat
    printf("\nRésultat de la coloration (algorithme de Welsh–Powell) :\n");
    for (int i = 0; i < n; i++)
        printf("Sommet %d → Couleur %d\n", i, color[i]);

    // --- Libération mémoire ---
    free(degree);
    free(color);
    free(order);
}


// chargeGraphe : charge une matrice d'adjacence depuis un fichier ou stdin
int** chargeGraphe(int *n, const char *filename) {
    FILE *f;

    if (filename == NULL) {
        f = stdin;
        printf("Entrez l'ordre du graphe : ");
    } else {
        f = fopen(filename, "r");
        if (!f) {
            perror("Erreur en ouvrant le fichier");
            exit(1);
        }
    }

    // Lecture de l'ordre
    fscanf(f, "%d", n);

    int **adj = createMatrix(*n);

    // Remplir la matrice
    for (int i = 0; i < *n; i++)
        for (int j = 0; j < *n; j++)
            fscanf(f, "%d", &adj[i][j]);

    if (filename != NULL)
        fclose(f);

    return adj;
}

