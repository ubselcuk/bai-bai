#include <stdio.h>
//N tam sayýsýna kadar olan tek ve çift sayýlarýn toplamýný veren program

 int main(){
 	
int i,n;
int top1=0;
int top2=0;
printf("sayi girin:");
scanf("%d",&n);

	
for (i=0; i<=n ; i++ ){
	if(i%2==0){
		top1 = top1+i;
	}
	else{
		top2= top2+i;
	}
}
 	printf("n'e kadar olan cift sayilarin topami:%d\n", top1);
 	printf("n'e kadar olan tek sayilarin topami:%d\n", top2);
 	
	
 
}
