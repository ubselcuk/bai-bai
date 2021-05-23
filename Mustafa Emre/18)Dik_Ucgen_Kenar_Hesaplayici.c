#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void hipotenus (int x, int y){
    int z;
    float result;
    z = (x*x)+(y*y);
    result = sqrt(z);
    printf("hipotenus uzunlugu:%f",result);
}  
void kenar (int x, int y){
    int z;
    float result;
    z = (x*x)-(y*y);
    z = abs(z);
    result = sqrt(z);
    printf("Kenar uzunlugu:%f",result);
} 
int main(void){
    int x=0,y=0,hip,cevap;
    printf("Hipotenus hesaplamak istiyorsaniz 1 \nYan kenarlardan birini hesaplamak istiyorsaniz 0 yaziniz.\nYanit:");
    scanf("%d",&cevap);
    switch (cevap)
    {
    case 1:
        //Hipotenüs hesaplama olacak
        printf("Hipotenus hesaplama modu\n");
        printf("Ucgenin birinci kenari:");
        scanf("%d",&x);
        printf("Ucgenin ikinci kenari:");
        scanf("%d",&y);
        hipotenus(x,y);
        break;
    case 0:
        // hipotenüs harici kenar hesabı
        printf("Yan kenar hesaplama modu\n");
        printf("Ucgenin birinci kenari:");
        scanf("%d",&x);
        printf("Ucgenin ikinci kenari:");
        scanf("%d",&y);
        kenar(x,y);
        break;
    default:
        printf("Yanlıs bir deger girdin lutfen 1 veya 0 gir");
        break;
    }
    return 0;
}