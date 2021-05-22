#include<iostream>
               
int main()
{   
	
	int i,kac,sayi;  
    float ort,toplam=0;
	
	 std::cout<<"Kac Sayi Gireceksiniz= "<<std::endl; 
     std::cin>>kac;
	 
	 for(i=1; i<=kac; i++)
    {
	 
     std::cout<<i<<".Sayiyi Giriniz= "<<std::endl; 
     std::cin>>sayi;

     toplam +=sayi;

    }

     ort=toplam/kac;              
     
     std::cout<<"Toplam= "<<toplam<<std::endl;
     
     std::cout<<"Ortalama= "<<ort<<std::endl;
     
     
  
}