#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* new_array_scan(int *pn){
  int n;
  scanf("%d", &n);
  int *array = NULL;
  array = (int *)malloc(sizeof(int)*n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
  *pn = n;
  return array;
}

int main(void)
{
  int *a = NULL;
  int i, n;

  a = new_array_scan(&n);

  for (i=0; i<n; i++) {
    printf(" %d", a[i]);
  }
  printf("\n");

  free(a);
  a = NULL;

  return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// int* new_array_scan(int *pn)
// {
//   int n;
//   scanf("%d",&n);
//   int *array = NULL;
//   array = (int *)malloc(sizeof(int )*n);
//   for (int i = 0; i < n; i++)
//   {
//     array[i] = 0;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     scanf("%d", &array[i]);
//   }
//   *pn = n;
//   return array;
// }

// int main(void)
// {
//   int *a = NULL;
//   int i, n;

//   a = new_array_scan(&n);

//   for (i=0; i<n; i++) {
//     printf(" %d", a[i]);
//   }
//   printf("\n");

//   free(a);
//   a = NULL;

//   return 0;
// }
