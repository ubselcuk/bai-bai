#include<iostream>
#include<math.h>
int main()
{
    std::cout<<"programa hosgeldiniz.."<<std::endl;
    std::cout<<"1-Toplama"<<std::endl;
    std::cout<<"2-Cıkarma"<<std::endl;
    std::cout<<"3-Carpma"<<std::endl;
    std::cout<<"4-Bolme"<<std::endl;
    
    int islem,a,b,sonuc;
    std::cout<<"Yapmak istediginiz islemi secin:"<<std::endl;
    std::cin>>islem;
    std::cout<<"ilk sayiyi giriniz = ";
    std::cin>>a;
    std::cout<<"ikinci sayiyi giriniz = ";
    std::cin>>b;

    if(islem==1)
        sonuc=(a+b);
      
    
    if(islem==2)
        sonuc=(a-b);
     
    
    if(islem==3)
        sonuc=(a*b);
       
    if(islem==4)
        sonuc=(a/b);
      
     std::cout<<"\n islemin sonucu = "<<sonuc<<std::endl;
    
}