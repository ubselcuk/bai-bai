#include <stdio.h>
//N kez disaridan sayi alip aldigi sayilarin en buyugunu bulan program
int main(){
	int n,sayi;
	int i=0;
	int max=0;
 printf("kac sayi gireceksiniz?"); scanf("%d", &n);
  
 
do{
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	if (sayi>max){
		max=sayi;
		}

	i++;
}
	while(i<n);
	
	
	

printf ("en buyuk sayi:%d", max);

}
