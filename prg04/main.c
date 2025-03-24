//Klavyeden girilen iki tam sayının toplamını bulan program
#include <stdio.h>

int main(void) {
    int sayi1, sayi2, sonuc;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1); //Klavyeden sayi1 değikenine giriş yapılır
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2); //Klavyeden sayi2 değişkenine giriş yapılır
    sonuc = sayi1 + sayi2;
    printf("%d + %d = %d", sayi1, sayi2, sonuc);
    return 0;
}