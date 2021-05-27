#include <stdio.h>

int main()
{
    int carpan_1 , carpan_2 , sonuc , i;
    printf("1.carpan: ");
    scanf("%d",&carpan_1);
    printf("2.carpan: ");
    scanf("%d",&carpan_2);
    for (i = 0; i < carpan_2; i++){
        sonuc+=carpan_1;
        }
    printf("Girilen sayilarin aritmetik ortalamasi: %d", sonuc);
    return 0;
}