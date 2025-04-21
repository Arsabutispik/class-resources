#include <stdio.h>
int main() {
  int deg1;
  char deg2[10] = {'P', 'A', 'U'};
  int *deg1prt;
  char *deg2prt;
  deg1prt = &deg1;
  deg2prt = deg2;
  deg1 = 15;
  printf("deg1 degiskenin degeri: %d\n", deg1);
  printf("deg1 degiskenin adresi: %d\n", *deg1prt);
  *deg1prt = 20;
  printf("deg1 degiskenin degeri: %d\n", deg1);
  printf("deg1 degisken adresi: %p\n", &deg1);
  printf("deg2 degisken adresi: %p\n", &deg2);
  return 0;
}