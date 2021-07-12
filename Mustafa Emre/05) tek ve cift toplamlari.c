#include <stdio.h>

int main(){
    int t=0,c=0,i,x;
	printf("kaca kadar olan tek ve cift sayilarin toplamini istiyorsun ?\nsayi:");
    scanf("%d",&x);
    for (i=1; i <= x;i+=2)
    {
        c+=i;
    }
     for (i=0; i <= x;i+=2)
    {
        t+=i;
    }
    printf("x sayisina kadar olan cift sayilarin toplami: %d\nx sayisina kadar olan tek sayilarin toplami: %d",c,t);
	
	return 0;
}