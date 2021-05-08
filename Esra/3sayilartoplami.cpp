#include<iostream>
int main(){

    int n,total;
    total=0;
    std::cout<<"Please write the number:"<<std::endl;
    std::cin>>n;
   while(n>0){
      
       total=total+n;
       n--;

   }
    std::cout<<"Total of the sequential number:"<<total<<std::endl;

}
