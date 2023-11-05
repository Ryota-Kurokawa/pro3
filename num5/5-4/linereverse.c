#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 126

// void *linereverse(char s[])
// {
//   // 初期化
//   char *result = NULL;
//   char line[SLEN + 1];
//   fprintf(stderr, "s =\n");
//   int j = 0;
//   while (fgets(s, SLEN, stdin) != NULL)
//   {
//     int i;
//     result = (char *)malloc(sizeof(char) * (strlen(s) + 1));
//     for (i = strlen(s); i > 0; i--)
//     {
//       result[i] = s[strlen(s) - i - 1];
//       if (i == 1)
//       {
//         result[strlen(s)] = '\0';
//       }
//     }

//     line[j] = *result;

//     free(result);
//     j++;
//   }
//   for (int j = 0; j < strlen(s); j++)
//   {
//     printf("%c", line[j]);
//   }
// }

void *linereverse(char s[])
{
  // 初期化
  char *result = NULL;
  result = (char *)malloc(sizeof(char) * (strlen(s) + 1));
  fprintf(stderr, "s =\n");
  int k = 0;
  while (fgets(s, SLEN, stdin) != NULL)
  {
    for (int i = 0; i < strlen(s); i++)
    {
      result[i] = s[strlen(s) - i - 1];
      if (i == strlen(s) - 1)
      {
        result[strlen(s)] = '\0';
      }
    }
    k++;
  }
  char line[k];
  for ( int l = 0; l < k ; k++)
  {
    line[k-l] = *result;
  }
}

int main(void)
{
  char s[SLEN + 1];
  linereverse(&s[SLEN + 1]);

  return 0;
}
