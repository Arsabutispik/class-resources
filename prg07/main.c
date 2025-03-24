//Klavyeden girilen tam sayının tek çift olduğunu belirleyen bir program yapın
#include <stdio.h>

int main(void) {
    int num, remaining;
    printf("Bir sayi girin:");
    scanf("%d", &num);
    //num % 2 == 0 ? printf("Sayi cift") : printf("Sayi tek");
    //remaining = num % 2;
    if (num % 2 == 1) {
        printf("Sayi tek\n");
    } else {
        printf("Sayi cift\n");
    }

    return 0;
}