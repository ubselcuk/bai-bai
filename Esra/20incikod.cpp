#include<iostream>

void display(float n1, float n2, char secim, float result);
void topla(float n1, float n2);
void fark(float n1, float n2);
void carp(float n1, float n2);
void bol(float n1, float n2);


int main()
{
  float n1, n2;
  int secim;

  do{
   std::cout<<"islem yapmak istedigin sayilari gir:"<<std::endl;
   std::cin>>n1>>n2;

    std::cout<<"*****************"<<std::endl;
    std::cout<<"1.Toplam"<<std::endl;
    std::cout<<"2.Fark"<<std::endl;
    std::cout<<"3.Carpim"<<std::endl;
    std::cout<<"4.Bolum"<<std::endl;
    std::cout<<"5.Exit"<<std::endl;
    std::cout<<"secimi gir: "<<std::endl;
    std::cin>>secim;

    switch (secim) {
      case 1:
        topla(n1,n2);
        std::cout << "The sum of " << n1 << " and " << n2 << " is " << n1+n2 << std::endl;
        break;
      case 2:
        fark(n1,n2);
        std::cout << "The substract of " << n1 << " and " << n2 << " is " << n1-n2 << std::endl;
        break;
      case 3:
        carp(n1,n2);
        std::cout << "The multiplication of " << n1 << " and " << n2 << " is " << n1*n2 << std::endl;
        break;
      case 4:
        bol(n1,n2);
        std::cout << "The divide of " << n1 << " and " << n2 << " is " << n1/n2 << std::endl;
        break;
      
      case 5:
        std::cout<<"tesekkurler"<<std::endl;
        exit(0);
      default:
        std::cout<<"gecersiz islem"<<std::endl;
        std::cout<<"lutfen gecerli islem girin.."<<std::endl;
    }

    std::cout<<"**********************************"<<std::endl;
  }while(1);

  return 0;
}


void display(float n1, float n2, char secim, float result)
{
  std::cout<< n1 << secim << n2 << result;
}

void topla(float n1, float n2)
{
  float result = n1 + n2;
  display(n1, n2, '+', result);
}


void fark(float n1, float n2)
{
  float result = n1 - n2;
  display(n1, n2, '-', result);
}


void carp(float n1, float n2)
{
  float result = n1 * n2;
  display(n1, n2, '*', result);
}


void bol(float n1, float n2)
{
  float result = n1 / n2;
  display(n1, n2, '/', result);
}
