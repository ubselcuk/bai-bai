#include <stdio.h>
//Faktöriyel hesabý yapan program

int faktoriyel(int sayi);

int main() {
  int sayi;

  printf("bir sayi giriniz:");
  scanf("%d", & sayi);

  printf("faktoriyel:%d", faktoriyel(sayi));
}

int faktoriyel(int sayi) {

  if (sayi <= 1) {
    return 1;
  } else
    return sayi * faktoriyel(sayi - 1);

}
