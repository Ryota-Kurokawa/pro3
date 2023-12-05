#include <stdio.h>
#include <time.h>
#include <math.h>
#include "myrand.h"
#include "list.h"

int main(void)
{
  clock_t clk_start, clk_end;

  list_node_t *head_p = create_node(0);
  int n = 0;
  scanf("%d", &n);

  myrand_init();
  clk_start = clock();

  for (int i = 0; i < n; i++)
  {
    list_insert_uniq(head_p, myrand());
  }

  clk_end = clock();
  printf("cpu = %g [sec]\n", (double)(clk_end - clk_start) / CLOCKS_PER_SEC);
  myrand_init();
  clk_start = clock();

  for (int i = 0; i < n; i++)
  {
    list_find(head_p, myrand());
  }
  clk_end = clock();
  printf("cpu = %g [sec]\n", (double)(clk_end - clk_start) / CLOCKS_PER_SEC);

  clk_start = clock();
  for (int i = 0; i < n; i++)
  {
    list_find(head_p, myrand());
  }
  clk_end = clock();
  printf("cpu = %g [sec]\n", (double)(clk_end - clk_start) / CLOCKS_PER_SEC);

  return 0;
}
