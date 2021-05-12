#include <stdio.h>

int main(){
	int a=0,b,i;
	printf("0'dan kaca kadar olan sayilarin toplamini istersiniz ?\n:");
	scanf(" %d",&b);
	if(b>0){
		for(i=0;i<=b;i++){
			a+=i;
			
		}
	}
	else{
		for(i=0;i>=b;i--){
      	a+=i;
    }
	}
	printf("0'dan %d. sayiya kadar olan sayilarin toplami %d",b,a); 
	return 0;
}