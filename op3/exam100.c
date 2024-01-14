#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BINS 21

double myrand(void)
{
  static unsigned long r = 53402397UL;
  r = (65539UL * r + 125654UL) & 0x7fffffffUL;
  return r / (double)0x80000000UL;
}

double normal(double mu, double sigma)
{
  double z = sqrt(-2.0 * log(myrand())) * sin(2.0 * M_PI * myrand());
  return mu + sigma * z;
}

void print_histogram(int *histogram)
{
  for (int i = 0; i < BINS; i++)
  {
    if (i < BINS - 1)
    {
      printf("%d - %d: %d\n", i * 5, i * 5 + 4, histogram[i]);
    }
    else
    {
      printf("%d : %d\n", i * 5, histogram[i]);
    }
  }
}

void generate_scores(int n, double mu, double sigma, int *histogram, double *average, double *std_deviation)
{
  double sum = 0.0, sum2 = 0.0;
  int score;

  for (int i = 0; i < n; i++)
  {
    score = (int)(normal(mu, sigma) + 0.5);
    score = (score < 0) ? 0 : (score > 100) ? 100
                                            : score;

    sum += score;
    sum2 += score * score;
    histogram[score / 5]++;
  }

  *average = sum / n;
  *std_deviation = sqrt((sum2 / n) - (*average) * (*average));
}

int main(void)
{
  int n;
  double mu, sigma;
  int *histogram = NULL;
  double average, std_deviation;

  printf("目標の平均値・標準偏差・受験者数を入力：");
  scanf("%lf %lf %d", &mu, &sigma, &n);

  histogram = (int *)malloc(sizeof(int) * BINS);
  if (histogram == NULL)
  {
    fprintf(stderr, "malloc failed\n");
    exit(1);
  }

  generate_scores(n, mu, sigma, histogram, &average, &std_deviation);

  printf("平均点: %.2f\n", average);
  printf("標準偏差: %.2f\n", std_deviation);

  print_histogram(histogram);

  free(histogram);

  return 0;
}
