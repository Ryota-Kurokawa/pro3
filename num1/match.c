#include <stdio.h>

int main(void)
{
    int k = 0;
    int n = 0;
    int m = 0;
    scanf("%d", &k);
    int a[k];
    // aの初期化
    for (int i = 0; i < k; i++)
    {
        a[i] = 0;
        // b[i] = 0;はここではできない。
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n); // 横に並べる数
    scanf("%d", &m); // 縦に並べる数
    int b[n];
    // bの初期化
    for (int i = 0; i < n; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[j]); // 実際に並べる数の入力
        }
        int rowResult = 0; // 0か1の判別を行った結果
        for (int p = 0; p <= n - k; p++)
        {
            int rowResult_item = 1; // 合致していれば1
            for (int h = 0; h < k; h++)
            {
                if (b[h + p] != a[h])
                {
                    rowResult_item = rowResult_item*0; // 間違えがあれば0に変更される
                    break;
                }
            }
            if (rowResult_item == 1)
            {
                rowResult = 1; // 1列で判別が完了であれば判定結果が1になる。
                break;
            }
        }
        printf("%d\n", rowResult);
    }
    return 0;
}
