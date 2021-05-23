#include <stdio.h>

int main(void){
	int n,faktoriyel=1,i;
	printf("faktoriyeli bulunmak istenen sayi:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		faktoriyel = i*faktoriyel;
	}
	printf("sonuc:%d",faktoriyel);
	return 0;	
}
