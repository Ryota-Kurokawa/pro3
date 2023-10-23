
#include <stdio.h>
#include "matrix.h"

int main(void)
{
   int n;
   double A[N][N], x[N], y[N];

   fprintf(stderr, "n = ");
   scanf("%d", &n);
   fprintf(stderr, "A\n");
   matrix_scan(n, A);
   fprintf(stderr, "B\n");
   matrix_scan(n, &x);

   
   matrix_vector_prod(n, A, x, y);
   

   printf("A\n");
   matrix_print(n, A);
   printf("x\n");
   // matrix_print(n, &x);
   for (int i = 0; i < n; i++)
   {
      printf(" %.5f\n", x[i]);
   }
   
   printf("y\n");
   // matrix_print(n, &y);
   for (int i = 0; i < n; i++)
   {
      printf(" %.5f\n", y[i]);
   }

   return 0;
}
