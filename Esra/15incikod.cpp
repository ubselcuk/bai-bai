#include <iostream>


int main(){

  int faktoriyel = 1, sayi = 0;

  std::cout << "Sayi giriniz: ";
  std::cin >> sayi;

  while (sayi >= 2){
    faktoriyel *= sayi;
    sayi--;
  }

  std::cout << faktoriyel;

  return 0;
}