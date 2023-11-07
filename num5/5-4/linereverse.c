#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINE 100
#define LINE_LEN 128

int main(void)
{
  char *line[MAX_LINE];
  char s[LINE_LEN + 1];
  
  int n = 0;
  while (fgets(s, MAX_LINE, stdin) != NULL && n < MAX_LINE)
  {
    line[n] = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(line[n], s);
    // printf("%s", line[n]);
    if (n == MAX_LINE - 1)
    {
      fprintf(stderr, "行が長すぎます\n");
    }
    else
    {
      n++;
    } 
  }
  
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%s", line[i]);
    free(line[i]);
  }
  
  
  return 0;
}
