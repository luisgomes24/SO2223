#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matrix.h"

/* implementation of the matrix API */
matrix *matrix_new(int n, int m)
{
    matrix *u = (matrix *)malloc(sizeof(matrix));
    u->n = n;
    u->m = m;
    u->vals = (double *)malloc((u->n * u->m) * sizeof(double));
    return u;
}
matrix *matrix_new_random(int n, int m, double min, double max)
{
    matrix *u = (matrix *)malloc(sizeof(matrix));
    u->n = n;
    u->m = m;
    u->vals = (double *)malloc((u->n * u->m) * sizeof(double));
    int i, j;
    double range = max - min;
    double div = RAND_MAX / range;
    for (i = 0; i < u->n; i++)
        for (j = 0; j < u->m; j++)
            matrix_set(i, j, min + (rand() / div), u);
    return u;
}
void matrix_print(matrix *u)
{
    /* to complete ... */
}
double matrix_get(int i, int j, matrix *u)
{
    return *(u->vals + i * u->m + j);
}
void matrix_set(int i, int j, double val, matrix *u)
{
    /* to complete ... */
}
matrix *matrix_add(matrix *u, matrix *v)
{
    int i, j;
    matrix *w = matrix_new(u->n, u->m);
    for (i = 0; i < u->n; i++)
        for (j = 0; j < u->m; j++)
            matrix_set(i, j, matrix_get(i, j, u) + matrix_get(i, j, v), w);
    return w;
}
matrix *matrix_sub(matrix *u, matrix *v)
{
    /* to complete ... */
}
matrix *matrix_mul(matrix *u, matrix *v)
{
    /* to complete ... */
}
matrix *matrix_trans(matrix *u)
{
    /* to complete ... */
}