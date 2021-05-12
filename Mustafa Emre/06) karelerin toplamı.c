#include <stdio.h>

int main(){
    int c,i,x;
	printf("kaca kadar olan sayilarin kareleri toplamini istiyorsun ?\nsayi:");
    scanf("%d",&x);
    for (i=0; i <= x;i++)
    {
        c=c+(i*i);
    }
    printf("%d sayisina kadar olan sayilarin kareleri toplami:%d",x,c);
	return 0;
}