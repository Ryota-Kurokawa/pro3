// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "istack.h"


// void istack_delete(istack_t *s)
// {
//   free(s->data);
//   free(s);
// }
// istack_t *istack_new(int size)
// {
//   istack_t *a = (istack_t *)malloc(sizeof(istack_t));
//   if (a == NULL)
//   {
//     exit(1);
//   }
//   a->sp = 0;
//   a->size = size;
//   a->data = (int *)malloc(sizeof(int) * size);
//   if (a->data == NULL)
//   {
//     free(a);
//     exit(1);
//   }
//   return a;
// }
// void istack_push(istack_t *s, int d)
// {
//   if (s->sp == s->size)
//   {
//     int a = s->size * 2;
//     int *b = (int *)realloc(s->data, sizeof(int) * a);
//     if (b == NULL)
//     {
//       exit(1);
//     }
//     s->size = a;
//     s->data = b;
//   }
//   s->sp += 1;
//   s->data[s->sp] = d;
// }
// int istack_empty(istack_t *s)
// {
//   if (s->sp == 0)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }
// void istack_pop(istack_t *s, int *d)
// {
//   if (s->sp > 0)
//   {
//     s->sp -=1;
//     *d = s->data[s->sp];
//   }
//   else if (s->sp == 0)
//   {
//     *d = 0;
//   }
// }
// int istack_full(istack_t *s)
// {
//   if (s->sp == s->size)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }

