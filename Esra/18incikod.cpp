#include <Math.h>
#include <iostream>
int main()
{
     int a,b,x,h;
     std::cout<<"Lutfen dik ucgenin iki kenarini sırasiyla giriniz."<<std::endl;
     std::cin>>a;
     std::cin>>b;
     x = (a*a) + (b*b);
     h = sqrt(x);
     std::cout<<"Hipotenus:"<<h<<std::endl;
    

}