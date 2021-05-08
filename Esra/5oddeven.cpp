#include <iostream>

int main()
{

int sayi;
int teklerTop = 0;
int ciftlerTop = 0;

std::cout<<"Bir sayi giriniz: "<<std::endl;
std::cin>>sayi;

do{
if(sayi % 2 == 0){
ciftlerTop+=sayi;
}

else if(sayi % 2 != 0) {
teklerTop+=sayi;
}

sayi--;

}
while(sayi>0);
std::cout<<"Tek sayilarin toplami: "<<teklerTop<<std::endl;
std::cout<<"Cift sayilarin toplami: "<<ciftlerTop<<std::endl;
return 0;
}