
#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

istack_t *istack_new(int size)
{
  istack_t *s = (istack_t *)malloc(sizeof(istack_t));
  if (s == NULL)
  {
    fprintf(stderr, "Failed to allocate memory for stack.\n");
    exit(1);
  }
  s->size = size;
  s->sp = 0;
  s->data = (int *)malloc(sizeof(int) * size);
  if (s->data == NULL)
  {
    free(s);
    fprintf(stderr, "Failed to allocate memory for stack data.\n");
    exit(1);
  }
  return s;
}

void istack_delete(istack_t *s)
{
  free(s->data);
  free(s);
}

void istack_pop(istack_t *s, int *d)
{
  if (s->sp == 0)
  {
    *d = 0;
  }
  else
  {
    *d = s->data[--s->sp];
  }
}

void istack_push(istack_t *s, int d)
{
  if (s->sp >= s->size)
  {
    s->size *= 2;
    s->data = (int *)realloc(s->data, sizeof(int) * s->size);
    if (s->data == NULL)
    {
      fprintf(stderr, "Failed to allocate memory for stack data.\n");
      exit(1);
    }
  }
  s->data[s->sp++] = d;
}

int istack_empty(istack_t *s) {
  return s->sp == 0 ? 1 : 0;
}

int istack_full(istack_t *s) {
  return s->sp == s->size ? 1 : 0;
}