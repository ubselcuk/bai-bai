#include<stdio.h>

int main(){
	int i,x;
	int toplam=0;
	printf ("sayi girin\n:");
	scanf("%d", &x);
	
	for (i=0; i<=x; i++){
	
    toplam= toplam+i ;
	}
    
	printf("toplam:%d", toplam);

}
