#include<stdio.h>
//N sayýsýna kadar olan sayýlarýn karelerinin toplamýný(n dahil deðil) bulan program
int main(){
	int n,i;
	int toplam=0;
	printf("sayi girin:");
    scanf("%d",&n);

    for(i=0; i<n; i++ ){
    	
    	toplam= toplam + (i*i);
	}
    printf("N sayisina kadar olan sayilarin karelerinin toplami:%d\n", toplam);
}
