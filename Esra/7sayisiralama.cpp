#include<iostream>
int main(){

    int a,b,c;
    std::cout<<"Please write the first number:"<<std::endl;
    std::cin>>a;
    std::cout<<"Please write the second number:"<<std::endl;
    std::cin>>b;
    std::cout<<"Please write the third number:"<<std::endl;
    std::cin>>c;

if ((a>b) &&(a>c))
{

    std::cout<<"a en buyuk"<<a<<std::endl;
}

else if (b>c){
    
std::cout<<"b en buyuk"<<b<<std::endl;

}

else{
    std::cout<<"c en buyuk"<<c<<std::endl;

}

}