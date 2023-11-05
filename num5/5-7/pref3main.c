#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pref.h"
#define MAX 47

int main(void)
{

  pref_t *pref[MAX];
  for (int i = 0; i < MAX; i++)
  {
    pref[i] = NULL;
  }
  int counter = 0;
  while ((pref[counter] = pref_new_scan()) != NULL && counter < MAX)
  {
    counter++;
  }
  for (int i = counter - 1; i >= 0; i--)
  {
    printf("%s %.2f %d\n", pref[i]->name, pref[i]->area, pref[i]->population);
  }

  for (int i = 0; i < counter; i++)
  {
    free(pref[i]);
    pref[i] = NULL;
  }

  return 0;
}