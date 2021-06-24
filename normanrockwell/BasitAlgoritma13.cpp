#include <stdio.h>
 //Fibonacci ilk 20 degeri yazdiran program
int main() {
  int sayi1 = 0;
  int sayi2 = 1;
  int fibonacci, i;

  printf("%d\n", sayi2);
  for (i = 0; i < 20; i++) {

    fibonacci = sayi1 + sayi2;
    printf("%d\n", fibonacci);
    sayi1 = sayi2;
    sayi2 = fibonacci;
  }

}
