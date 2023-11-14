void sort(int n, double *a)
{
  for (int k = 0; k <= n - 2; k++)
  {
    int min = k;
    for (int i = k; i < n; i++)
    {
      if (a[i] < a[min])
      {
        min = i;
      }
    }
    double tmp = a[k];
    a[k] = a[min];
    a[min] = tmp;
  }
}