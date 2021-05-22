#include <stdio.h>

int main()
{
    int sayi , x , toplam=0 , modu;
    printf("Sayi:");
    scanf("%d",&sayi);
    x = sayi;
    while(x > 10){
        x = sayi;
        modu = sayi%10;
        toplam += modu;
        sayi = sayi/10;
    }
    printf("\ngirilen sayinin rakamlar toplami:%d",toplam);
    return 0;
}