#include <stdio.h>
const int N = 4;
int main () {
  char *isim[] = {"Ali Veli", "Ayse Gunes", "Nuri Can", "Seda Koc"};
    int i = 0;
    for (i = 0; i < N; i++) {
        printf("isim[%d] nin adresi = %p\n", i, isim[i]);
        printf("isim[%d] nin degeri = %s\n", i, isim[i]);
    }
}