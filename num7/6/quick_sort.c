// void sort(int n, double *a)
// {
//    /* a[0]〜a[n-1] を分割: p 以下の要素を a[] の前半に, p 以上の要素を後半に集める */
//    l = 0;  /* 左端 */
//    r = n-1;  /* 右端 */
//    p = a[0];  /* p として先頭要素を選ぶ */
//    l ≤ r である間繰り返す {
//       a[l]<p である間 l を 1 増やす;
//       a[r]>p である間 r を1 減らす;
//       もし l≤r ならば {
//          a[l] とa[r] を交換;
//          l を1 増やし, r を1 減らす;
//       }
//    }
//    /* 分割の結果, a[0]〜a[r] が p 以下, a[l]〜a[n-1] が p 以上になっている */

//    0<r ならば a[0]〜a[r] をソート (sort(??, ??) を呼び出す … (1));
//    l<n−1 ならば a[l]〜a[n-1] をソート (sort(??, ??) を呼び出す … (2));
// }

void sort(int n, double *a)
{
  int l = 0;
  int r = n - 1;
  int p = a[0];
  while (l <= r)
  {
    while (a[l] < p)
    {
      l++;
    }
    while (p < a[r])
    {
      r--;
    }
    if (l <= r)
    {
      double tmp = a[l];
      a[l] = a[r];
      a[r] = tmp;
      l++;
      r--;
    }
  }
  if (0 < r)
  {
    sort(r + 1, a);
  }
  if (l < n - 1)
  {
    sort(n - l, a + l);
  }
}