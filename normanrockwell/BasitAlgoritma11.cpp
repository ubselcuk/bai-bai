#include<stdio.h>
//Girilen N sayisinin rakamlarinin toplamini bulan program

int main(void)
{
	int i,sayi,rakam;
	int toplam=0;
	
   printf("bir sayi girin\n");  scanf("%d",&sayi);
   for(i=0; sayi!=0; i++){
   	
   rakam= sayi%10;
   toplam=toplam+rakam;
   sayi=sayi/10;
   }
   
   printf("rakamlar toplami:%d\n ", toplam);
   
	
}
