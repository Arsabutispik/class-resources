#include <stdio.h>
/* Klavyeden girilecek 5 sayının toplamını ve ortalamasını ekrana yazdıran program - for ile*/
int main(void) {
    int i;
    float sayi, toplam = 0, ortalama;
    for (i = 1; i <= 5; i++) {
        printf("Sayi girin: ");
        scanf("%f", &sayi);
        toplam += sayi;
    }
    ortalama = toplam / 5;
    printf("Ortalama = %.2f, Toplam = %.2f\n", ortalama, toplam);
    return 0;
}