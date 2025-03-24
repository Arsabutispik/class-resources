#include <stdio.h>

int main(void) {
    int secim;
    printf("Sayi girin:");
    scanf("%d", &secim);
    switch (secim) {
        case 1: printf("1. isim secildi\n"); break;
        case 2: printf("2. isim secild\n"); break;
        case 3: printf("3. isim secild\n"); break;
        default: printf("Sayi girin:"); break;
    }
    return 0;
}