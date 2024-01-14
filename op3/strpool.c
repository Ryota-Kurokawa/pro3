#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POOL_SIZE 512
#define WORD_MAX 32

char pool[POOL_SIZE];
char *word[WORD_MAX];
char *next;

void readWords(void);

int main(void)
{
  readWords();

  printf("pool = (%p)\n", pool);
  for (int j = 0; word[j] != NULL; j++)
  {
    printf("word[%d] = (%p) \"%s\"\n", j, word[j], word[j]);
  }
  printf("next = (%p)\n", next);

  return 0;
}

void readWords(void)
{
  int i = 0;
  next = pool;

  for (;;)
  {
    fprintf(stderr, "next word = ");

    // Use dynamic allocation to ensure enough space for each word
    word[i] = malloc(WORD_MAX);

    if (word[i] == NULL)
    {
      fprintf(stderr, "Memory allocation failed\n");
      exit(EXIT_FAILURE);
    }

    if (scanf("%s", word[i]) == EOF)
    {
      free(word[i]); // Free allocated memory before exit
      word[i] = NULL;
      break;
    }

    next += strlen(word[i]) + 1;
    i++;
  }
}
