#include <stdio.h>
#include <time.h>
#include "iata_db.h"

int main(void)
{
  db_t db;
  char key[KEY_LEN + 1];
  char *data;

  db_init(&db);
  db_load(&db);

  /* 空港コードを入力するとデータを出力; EOFまで繰り返し実行 */
  for (;;)
  {
    clock_t clk_start, clk_end;
    clk_start = clock();
    fprintf(stderr, "key = ");
    if (scanf(KEY_FMT, key) == EOF)
    {
      break;
    }
    for (int i = 0; i < 100000; i++)
    {
      data = db_linear_search(&db, key);
    }
    clk_end = clock();
    fprintf(stderr, "cpu = %f\n", (double)(clk_end - clk_start) / CLOCKS_PER_SEC);
    if (data != NULL)
    {
      printf("%s => %s\n", key, data);
    }else
    {
      printf("NO RECORD\n");
    }
    
  }

  db_delete(&db);
  return 0;
}