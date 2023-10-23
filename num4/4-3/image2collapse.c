#include <stdio.h>
#include "image2.h"

/* 画像全体を「涼しげ」にする関数 */
void bmp_cool(bmp_data_t *bmp);

int main(void)
{
    
    bmp_data_t bmp;                /* ヘッダ情報 */

    bmp_read("in.bmp", &bmp);   /* in.bmp から読み込む */
    bmp_cool(&bmp);             /* 処理の呼び出し */
    bmp.header.biHeight = bmp.header.biHeight / 2;
    bmp_write("out.bmp", &bmp); /* out.bmp への書き出し */

    return 0;
}

/* 画像処理の関数の本体 */
void bmp_cool(bmp_data_t *bmp)
{
    int i, j;

    /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
    for (int h = 0; h < bmp->header.biHeight/2; h += 1)
    {
        for (int w = 0; w < bmp->header.biWidth; w+=1)
        {

            double sum_r = 0;
            double sum_g = 0;
            double sum_b = 0;
            double ave_r = 0;
            double ave_g = 0;
            double ave_b = 0;
            
            bmp->img[h][w].r = (bmp->img[h * 2][w].r + bmp->img[h * 2 + 1][w].r) / 2;
            bmp->img[h][w].g = (bmp->img[h * 2][w].g + bmp->img[h * 2 + 1][w].g) / 2;
            bmp->img[h][w].b = (bmp->img[h * 2][w].b + bmp->img[h * 2 + 1][w].b) / 2;
            
        }
    }
    /************** ここまで *************************************************/
}
