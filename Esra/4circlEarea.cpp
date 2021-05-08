#include<iostream>

int main(){
    float r,area,environment;
    std::cout<<"Please write the radius of circle:"<<std::endl;
    std::cin>>r;
    area=3.14*r*r;
    environment=2*(3.14*r);
    std::cout<<"Environment of this circle:"<<environment<<"Area of this circle:"<<area<<std::endl;

}
