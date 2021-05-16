#include <iostream>
int main()
{
  int birincisayi=1;
  int ikincisayi=1;
  int i;
  std::cout<<birincisayi<<std::endl;
  std::cout<<ikincisayi<<std::endl;
  
  
 
  for(i=0; i<20; i++)
  {

      int fibonacci = ikincisayi;
      ikincisayi += birincisayi;
      birincisayi = fibonacci;
      std::cout<<ikincisayi<<std::endl;
   }


}