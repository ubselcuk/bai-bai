#include <stdio.h>
 //Kullanıcı -1 girene kadar girilen sayıların ortalamasını bulan program

int main() {

  float input;
  float toplam = 0;
  float adet = 0;

  do {
    printf("lutfen sayi giriniz:\n");
    scanf("%f", & input);

    toplam = toplam + input;
    adet++;

  }
  while (input != -1);

  printf("Aritmetik ortalama: %.2f", (toplam + 1) / (adet - 1));
} 
