#include<iostream>

int main()
{
 
 int i,kacsayi=0;
 float ortalama=0;
 int toplam=0;
 
 while(i != -1)
 {
      std::cout<<"Sayi girin:"<<std::endl;
      std::cin>>i;
      toplam=toplam+i;
       kacsayi++;
 }
kacsayi--;
 toplam++; 
 ortalama=toplam/kacsayi;
 std::cout<<"ortalama:"<<ortalama<<std::endl;

}