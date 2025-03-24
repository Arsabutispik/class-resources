#include <stdio.h>

int main(void) {
    int notlar[2][5] = {{80, 70, 65, 89, 90}, {85, 80 ,80, 82, 87}}, toplam;
    float ort;
    int i, j;
    for (i = 0; i < 2; i++) {
        toplam = 0;
        for (j = 0; j < 5; j++) {
            toplam += notlar[i][j];
        }
        ort = (float)toplam / (float)j;
        printf("%d. Ogrencinin ortalamasi = %.2f\n", i+1, ort);
    }
    return 0;
}