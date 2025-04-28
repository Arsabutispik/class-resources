//Rastgele 0-100 arası n adet tam sayı üreten ve prototipi int *rastgele10(int); olan bir fonskiyon tanımlayınız ve bu fonksiyonu kullanan basit bir C programı yaznınız.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *rastgele10(int n);
int main() {
    int *p, i, n;
    printf("Kac tane rastgele sayi uretilsin?\n");
    scanf("%d", &n);
    p = rastgele10(n);
    for (i = 0; i < n; i++) {
        printf("%d.sayi = %d\n", i + 1, *(p + i));
    }
    return 0;
}
int *rastgele10(int n) {
    int *dizi = (int *)malloc(n * sizeof(int));
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        dizi[i] = rand() % 101;
    }
    return dizi;
}