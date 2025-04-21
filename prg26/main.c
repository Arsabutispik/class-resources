#include <stdio.h>
double faktoriyel(int);

int main () {
  int sayi;
  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);
  printf("%d! = %.0f\n", sayi, faktoriyel(sayi));
  return 0;
}

double faktoriyel (int n) {
  double f;
  if(n == 0 || n == 1) {
    f = 1;
  } else {
    f = n * faktoriyel(n - 1);
  }
  return f;
}