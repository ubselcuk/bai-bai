#include<iostream>

int main()
{
    int s,k,giris;

    int yildiz=1;

    std::cout<<"Sayi girin:\n"<<std::endl;
    std::cin>>giris;

    for( k=0; k<giris; k++)
    {
        for( s=0; s<yildiz; s++)

        {
            std::cout<<"*";
        }

        std::cout<<"\n";
        yildiz++;
    }
     
   return 0;     
}