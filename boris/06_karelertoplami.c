#include <stdio.h>

int main()
{
    int sayi;
    int toplam = 0;
    printf("Bir sayti giriniz: ");
    scanf("%d", &sayi);

    while (sayi > 0)
    {
        toplam = toplam + (sayi * sayi);
        sayi--;
    }

    printf("Kareleri toplami = %d", toplam);

    return 0;
}