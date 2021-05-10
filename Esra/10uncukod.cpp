#include<iostream>

int main()
{ 

    int a,b,s=0,i;
  
    
    std::cout<<"Lutfen 1.sayiyi giriniz :"<<std::endl;  
    std::cin>>a; 
     
    std::cout<<"Lutfen 2.sayiyi  giriniz :"<<std::endl;  
    std::cin>>b; 
 
      for (i=1; i<=a; i++ ){
           s= s+b;
           

      }

     std::cout<<"a*b="<<s<<std::endl;
      
     
   
}
