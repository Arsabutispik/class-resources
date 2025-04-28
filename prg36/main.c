#include <stdio.h>
#include <time.h>
int main () {
    int sayi;
    srand(time(NULL)); // Rastgele sayi üretimi için zaman kullanılıyor
    sayi = 100 + rand() % 51;
    printf("Sayi: %d\n", sayi);
    return 0;
}