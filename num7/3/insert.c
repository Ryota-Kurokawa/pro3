void insert(int n, double *a, int k)
{
  double tmp;
  for (int i = k; 0 <= i; i--)
  {
    if (a[i - 1] <= a[i])
    {
      break;
    }
    else
    {
      tmp = a[i];
      a[i] = a[i - 1];
      a[i - 1] = tmp;
    }
  }
}