#include <iostream>

int main(){

  int sayi = 0, durum = 1;
  std::cout << "Sayi : ";
  std::cin >> sayi;

  for (int i = 2; i < sayi / 2; i++){

    if (sayi % i == 0){
      std::cout << "Asal sayi degildir.";
      durum = 0;
      break;
    }

  }

  if (durum){
    std::cout << "Asal sayidir.";
  }


}
