#include <stdio.h>
 //Yildizlardan N yuksekliginde dik ucgen yazdiran program
int main() {
  int n, i, j;

  printf("ucgenin yuksekligi icin bir sayi girin:\n");
  scanf("%d", & n);

  for (i = 0; i < n; i++) {

    printf("\n*");
    for (j = 0; j < i; j++) {
      printf("*");

    }
  }
}
