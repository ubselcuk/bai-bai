#include<iostream>
int main()
{

int miktar,sayi;
int i=0, buyuksayi=0;

std::cout<<"Kac sayi girmek istiyorsunuz?"<<std::endl;
std::cin>>miktar;

while(i<miktar)
{
    std::cout<<i<<". sayiyi giriniz:"<<std::endl;
    std::cin>>sayi;
    i++;

    if(sayi > buyuksayi)
    {

        buyuksayi = sayi;

    }   
    


}
std::cout<<"en buyuk sayi:"<<buyuksayi<<std::endl;

return 0;

}