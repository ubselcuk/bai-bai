#include <stdio.h>
 //Girilen N sayýsýnýn asal olup olmadigini bulan program
 //Bu algoritma negatif sayilari da kontrol edebiliyor

int main() {
  int sayi;
  int i = 2;
  printf("bir sayi girin\n");
  scanf("%d", & sayi);

  if (sayi > 1) {

    if (sayi == 2) {
      printf("sayi asaldir");
    } else

    if (sayi % i == 0) {
      printf("sayi asal degil");
      do {
        i++;
      }
      while (i < sayi);

    } else
      printf("sayi asaldir");
  } else
    printf("sayi asal degil");

}
