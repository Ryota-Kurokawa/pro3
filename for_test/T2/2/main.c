#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 126
#define SFMT "%126s"

char *strdouble(char s[])
{
  char *clone_double = NULL;
  clone_double = (char *)malloc(sizeof(char) * (strlen(s) * 2 + 1));
  for (int i = 0; s[i] != '\0'; i++)
  {
    clone_double[i] = s[i];
  }
  for (int i = 0; s[i] != '\0'; i++)
  {
    clone_double[strlen(s) + i] = s[i];
  }
  
  return clone_double;
}

int main(void)
{
  char s[SLEN + 1];
  char *s2 = NULL;

  for (;;)
  {
    fprintf(stderr, "s = ");
    if (scanf(SFMT, s) == EOF)
    {
      break;
    }
    s2 = strdouble(s);
    printf("%s\n", s2);
    free(s2);
    s2 = NULL;
  }

  return 0;
}
