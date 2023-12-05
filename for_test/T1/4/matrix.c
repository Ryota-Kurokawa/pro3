#include <stdio.h>
#include <assert.h>
#include "matrix.h"


/* 行列の出力 */
void matrix_print(int n, double A[N][N])
{
   int i, j;
   assert(n<=N);
   for (i=0; i<n; i++) {
      for (j=0; j<n; j++) {
         printf(" %.5f", A[i][j]);
      }
      printf("\n");
   }
}

