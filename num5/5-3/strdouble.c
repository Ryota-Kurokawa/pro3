#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdouble(char s[])
{
  char *result = NULL;
  int i;
  result = (char *)malloc(sizeof(char) * (strlen(s) * 2 + 1));
  for (i = 0; i < strlen(s); i++)
  {
    result[i] = s[i];
  }
  for (i = strlen(s); i < strlen(s) * 2; i++)
  {
    result[i] = s[i - strlen(s)];
  }
  result[i] = '\0';
  return result;
}