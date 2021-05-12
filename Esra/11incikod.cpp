#include<iostream>
int main(){
    int n,toplam=0,x;
    std::cout<<"sayi girin:"<<std::endl;
    std::cin>>n;
    while(n>0){
        x=n%10;
        toplam=toplam+x;
        n=n/10; 

    }
    std::cout<<"sayinin rakamlari toplami:"<<toplam<<std::endl;
    

}