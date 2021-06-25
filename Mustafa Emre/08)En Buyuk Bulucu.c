#include <stdio.h>

int main()
{
    int sayi_sayisi , giris , en_buyuk = 0 , i;
    printf("Girilecek sayi sayisi: ");
    scanf("%d",&sayi_sayisi);
    printf("\nSayilari giriniz");
    for (i = 0; i < sayi_sayisi; i++)
    {
        printf("\n%d.sayi: ",i+1);
        scanf("%d",&giris);
        if(giris>en_buyuk){
            en_buyuk = giris;
        }
    }
    
    printf("Girilen sayilardan en buyugu: %d", en_buyuk);

    return 0;
}