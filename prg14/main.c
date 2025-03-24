#include <stdio.h>

int main(void) {
   int i, n, toplam = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        toplam += i;
    }
    printf("toplam = %d\n", toplam);
    return 0;
}