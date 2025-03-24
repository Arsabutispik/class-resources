#include <stdio.h>

int main(void) {
    int araSinav, final;
    printf("Arasinav ve final notlarini giriniz: ");
    scanf("%d %d", &araSinav, &final);
    double basariNotu = araSinav * 0.4 + final * 0.6;
    if (basariNotu >= 50) {
        if (basariNotu >= 60) {
            printf("Basari Puani = %f ve ogrenci basarili.", basariNotu);
        } else {
            printf("Basari Puani = %f ve ogrenci kosullu basarili.", basariNotu);
        }
    } else {
        printf("Basari Puani = %f ve ogrenci basarisiz", basariNotu);
    }
    return 0;
}