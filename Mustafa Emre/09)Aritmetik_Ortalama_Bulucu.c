#include <stdio.h>

int main()
{
    int sayi_sayisi , giris , i;
    float ortalama;
    printf("Girilecek sayi sayisi: ");
    scanf("%d",&sayi_sayisi);
    printf("\nSayilari giriniz");
    for (i = 0; i < sayi_sayisi; i++)
    {
        printf("\n%d.sayi: ",i+1);
        scanf("%d",&giris);
        ortalama = (ortalama+giris);
    }
    ortalama = ortalama/sayi_sayisi;
    printf("Girilen sayilarin aritmetik ortalamasi: %f", ortalama);

    return 0;
}