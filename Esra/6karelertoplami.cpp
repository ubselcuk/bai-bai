#include<iostream>
int main(){

    int n,i,toplam;
    
    std::cout<<" Bir sayi giriniz : "<<std::endl;
    std::cin>>n;
     
    toplam=0;

      for  (i=1; i<=n; i++ )
   
      toplam = toplam + i*i;

    std::cout<<" Girilen sayinin  karelerinin toplami : "<<toplam<<std::endl;
           





}