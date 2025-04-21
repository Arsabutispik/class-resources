#include <stdio.h>
const int N = 3;
int main() {
  int dizi[] = {10, 100, 200};
  int i, *ptr;
  ptr = dizi;
  for (i = 0; i < N; i++) {
    /*printf("dizi[%d] nin adresi = %p\n", i, ptr);
    printf("dizi[%d] nin degeri = %d\n", i, *ptr);
    ptr++; */
    printf("dizi[%d] = %d\n", i, dizi[i]);
    printf("dizi[%d] = %d\n", i, *(ptr + i));
  }
}