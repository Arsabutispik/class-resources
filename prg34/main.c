#include <stdio.h>
double ortalamaAl(int*, int);
int main() {
    int sayi[5] = {1000, 2, 3, 17, 50};
    double ort;
    ort = ortalamaAl(sayi, 5);
    printf("Ortalama: %f\n", ort);
    return 0;
}
double ortalamaAl(int *dizi, int n) {
    int i, top = 0;
    double ort;
    for (i = 0; i < n; i++) {
        top += dizi[i];
    }
    ort = (double) top / n;
    return ort;
}
