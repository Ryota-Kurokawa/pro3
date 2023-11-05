#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_S 128
#define MAX_LINE 100
#define LINE_LEN 128

int main(void)
{
  char *line[MAX_LINE];
  char s[MAX_S + 1];
  
  int n = 0;
  while (fgets(s, MAX_LINE, stdin) != NULL)
  {
    line[n] = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(line[n], s);
    // printf("%s", line[n]);
    
    n++;
  }
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%s", line[i]);
    free(line[i]);
  }
  
  
  return 0;
}

