#include <stdio.h>
#include <assert.h>
#include "matrix.h"
#include <math.h>

/* 行列の出力 */
void matrix_print(int n, double A[N][N])
{
    int i, j;
    assert(n <= N);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %.5f", A[i][j]);
        }
        printf("\n");
    }
}

void matrix_scan(int n, double A[N][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }
}

void matrix_sum(int n, double A[N][N], double B[N][N], double Y[N][N])
{
    for (int k = 0; k < 3; k++)
    {
        if (k == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%lf", &A[i][j]);
                }
            }
        }
        else if (k == 1)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%lf", &B[i][j]);
                }
            }
        }
        else if (k == 2)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Y[i][j] = A[i][j] + B[i][j];
                }
            }
        }
    }
}

void matrix_trans2(int n, double A[N][N], double Y[N][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Y[i][j] = A[j][i];
        }
    }
}

void matrix_trans1(int n, double A[N][N])
{
    double Y[N][N];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Y[i][j] = A[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = Y[i][j];
        }
    }
}

void vector_scan(int n, double x[N])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &x[i]);
    }
}

void vector_print(int n, double x[N])
{
    for (int i = 0; i < n; i++)
    {
        printf(" %.5f", x[i]);
    }
}

void matrix_vector_prod(int n, double A[N][N], double x[N], double y[N])
{
    for (int k = 0; k < 2; k++)
    {
        if (k == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%lf", &A[i][j]);
                }
                
            }
        }
        else if (k == 1)
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%lf", &x[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y[i] = y[i] + (A[i][j] * x[j]);
        }
    }
}