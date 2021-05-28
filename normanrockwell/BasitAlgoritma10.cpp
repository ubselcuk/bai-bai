#include<stdio.h>
//Carpma islemi kullanmadan iki sayinin carpimini bulan program
int main(){
	
	int x,y,i;
	int carpim=0;
	
printf("lutfen 2 adet sayi girin\n");  scanf("%d",&x);  scanf("%d",&y);

for(i=0;i<y;i++){
	
	carpim= carpim+x;
}
printf("carpim sonucu:%d\n",carpim);

}
