#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pref.h"

pref_t *pref_new(char *name, double area, int population)
{
  pref_t *p = (pref_t *)malloc(sizeof(pref_t));
  strcpy(p->name, name);
  p->area = area;
  p->population = population;
  return p;
}

void pref_print(pref_t *p)
{
  printf("%s %0.2f %d\n", p->name, p->area, p->population);
}

pref_t *pref_new_scan()
{
    pref_t *b = NULL;
    b = (pref_t *)malloc(sizeof(pref_t));

    if (scanf("%s", b->name) == EOF || scanf("%lf", &b->area) == EOF || scanf("%d", &b->population) == EOF)
    {
        return NULL;
    }
    return b;
}