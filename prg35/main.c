#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int *rastgele();
int main() {
    int *p, i;
    p = rastgele();
    for (i = 0; i < 10; i++) {
        printf("*(p + %d) : %d\n ", i, *(p + i));
    }
    return 0;
}
int *rastgele() {
    static int dizi[10];
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        dizi[i] = rand() % 100;
        printf("dizi[%d] : %d\n", i, dizi[i]);
    }
    return dizi;
}