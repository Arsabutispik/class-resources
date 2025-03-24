//Girilen bir sayının 0'dan küçük mü 0'a eşit mi yoksa 0'dan büyük mü olduğunu uygun bir şekilde gösteren bir programla belirtiniz
#include <stdio.h>

int main(void) {
    int num;
    printf("Bir sayi giriniz:");
    scanf("%d", &num);
    if (num < 0) {
        printf("%d sayisi 0'dan kucuk", num);
    } else if (num == 0) {
        printf("%d sayisi 0'a esit", num);
    } else {
        printf("%d sayisi 0'dan buyuk", num);
    }
    return 0;
}