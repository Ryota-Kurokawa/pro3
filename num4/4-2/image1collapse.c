#include <stdio.h>
#include "image1.h"

/* 画像全体を「涼しげ」にする関数 */
void bmp_cool(bmp_header_t *hd, pixel_t img[MAX_Y][MAX_X]);

int main(void)
{
    bmp_header_t hd;
    pixel_t img[MAX_Y][MAX_X];

    bmp_read("in.bmp", &hd, img);   /* in.bmp から読み込む */
    bmp_cool(&hd, img);             /* 処理の呼び出し */
    hd.biHeight = hd.biHeight / 2;
    bmp_write("out.bmp", &hd, img); /* out.bmp への書き出し */

    return 0;
}

/* 画像処理の関数の本体 */
void bmp_cool(bmp_header_t *hd, pixel_t img[MAX_Y][MAX_X])
{
    int i, j;

    /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
    for (int h = 0; h < hd->biHeight/2; h += 1)
    {
        for (int w = 0; w < hd->biWidth; w+=1)
        {

            double sum_r = 0;
            double sum_g = 0;
            double sum_b = 0;
            double ave_r = 0;
            double ave_g = 0;
            double ave_b = 0;
            
            img[h][w].r = (img[h * 2][w].r + img[h * 2 + 1][w].r) / 2;
            img[h][w].g = (img[h * 2][w].g + img[h * 2 + 1][w].g) / 2;
            img[h][w].b = (img[h * 2][w].b + img[h * 2 + 1][w].b) / 2;
            
        }
    }
    /************** ここまで *************************************************/
}
