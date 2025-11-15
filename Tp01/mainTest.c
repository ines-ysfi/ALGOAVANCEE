#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main() {
    int n = 6;
    int **adj = createMatrix(n);

    int data[6][6] = {
        {0, 1, 1, 0, 0, 1},
        {1, 0, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 1, 0},
        {0, 0, 1, 1, 0, 1},
        {1, 0, 0, 0, 1, 0}
    };
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = data[i][j];

    
    welshPowell(adj, n);
    freeMatrix(adj, n);
    return 0;
}
