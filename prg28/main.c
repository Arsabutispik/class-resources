#include <stdio.h>
void elemanlariGoster(int [5], int);
int main() {
  int dizi[5] = {55, 414, 7, 210, 15};
  elemanlariGoster(dizi, 5);
  return 0;
}

void elemanlariGoster(int dizi[5], int boyut) {
  int i;
  for (i = 0; i < boyut; i++) {
    printf("%d ", dizi[i]);
  }
}