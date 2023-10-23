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
    bmp_write("out.bmp", &hd, img); /* out.bmp への書き出し */

    return 0;
}

/* 画像処理の関数の本体 */
void bmp_cool(bmp_header_t *hd, pixel_t img[MAX_Y][MAX_X])
{
    int i, j;

    /**** 以下 (現状は画像を全体に暗くする処理になっている) を書き換えて完成させよ ****/
    for (int h = 0; h < hd->biHeight; h += 16)
    {
        for (int r = 0; r < hd->biWidth / 2; r += 16)
        {
            double sum_r = 0;
            double sum_g = 0;
            double sum_b = 0;
            double ave_r = 0;
            double ave_g = 0;
            double ave_b = 0;
            for (i = 0; i < 16; i++)
            { /* biHeight は画像の高さ */
                for (j = 0; j < 16; j++)
                { /* biWidth  は画像の幅 */

                    sum_r += img[h + i][r + j].r;
                    sum_g += img[h + i][r + j].g;
                    sum_b += img[h + i][r + j].b;
                }
            }
            ave_r = sum_r / 256;
            ave_g = sum_g / 256;
            ave_b = sum_b / 256;
            for (i = 0; i < 16; i++)
            { /* biHeight は画像の高さ */
                for (j = 0; j < 16; j++)
                { /* biWidth  は画像の幅 */

                    img[h + i][r + j].r = ave_r;
                    img[h + i][r + j].g = ave_g;
                    img[h + i][r + j].b = ave_b;
                }
            }
        }
    }
    /************** ここまで *************************************************/
}
