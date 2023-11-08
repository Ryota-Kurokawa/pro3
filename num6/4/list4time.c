#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "list.h"
#include "myrand.h"

int main(void)
{
  clock_t clk_start, clk_end;
  list_node_t *head_p = create_node(0); /* ヘッダ (ダミー) */
  int n, m = 0;
  // (0)
  scanf("%d", &n);
  // (1)
  clk_start = clock();
  myrand_init();
  for (int i = 0; i < n; i++)
  {
    m = myrand();
    list_insert_uniq(head_p, m);
  }
  // (2)
  myrand_init();

  for (int i = 0; i < n; i++)
  {
    m = myrand();
    list_find(head_p, m);
  }
  // (3)
  for (int i = 0; i < n; i++)
  {
    m = myrand();
    list_find(head_p, m);
  }
  clk_end = clock();
  printf("cpu = %f [sec]\n", (double)(clk_end - clk_start) / CLOCKS_PER_SEC);

  return 0;
}
