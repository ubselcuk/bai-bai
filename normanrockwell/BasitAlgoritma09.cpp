#include <stdio.h>
//Girilen N tane sayinin aritmetik ortalamasini bulan program


int main(){
	
	int n,i,sayi;
    int artort;
    int toplam=0;
printf("kac sayi gireceksiniz?");  scanf("%d",&n);

    for(i=1; i<=n; i++){
	printf("sayi gir");  scanf("%d",&sayi);
		  
		artort= (toplam+sayi)/i ;  
		toplam=toplam+sayi;
	
	
    }



	printf("sayilarin aritmetik ortalamasi:%d\n",artort);
	

}


