#ifndef GRAPH_H
#define GRAPH_H

int** createMatrix(int n);
void freeMatrix(int **matrix, int n);
void welshPowell(int **adj, int n);
int** chargeGraphe(int *n, const char *filename);
#endif
