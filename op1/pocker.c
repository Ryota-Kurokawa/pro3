#include <stdio.h>

int main()
{
  int hand[5], counts[14] = {0}; // 1から13までの各数値の出現回数を格納する配列
  while(scanf("%d %d %d %d %d", &hand[0], &hand[1], &hand[2], &hand[3], &hand[4]) != EOF) {
    for (int i = 0; i < 5; i++)
    {
      counts[hand[i]]++;
    }

    int pairs = 0, threes = 0, fours = 0;
    for (int i = 1; i <= 13; i++)
    {
      if (counts[i] == 2)
        pairs++;
      if (counts[i] == 3)
        threes++;
      if (counts[i] == 4)
        fours++;
    }

    if (fours) {
      printf("four of a kind\n");
    } else if (threes && pairs) {
      printf("full house\n");
    } else if (threes) {
      printf("three of a kind\n");
    } else if (pairs == 2) {
      printf("two pair\n");
    } else if (pairs) {
      printf("one pair\n");
    } else {
      printf("no pair\n");
    }

    // Reset counts for the next hand
    for (int i = 1; i <= 13; i++)
    {
      counts[i] = 0;
    }
  }

  return 0;
}