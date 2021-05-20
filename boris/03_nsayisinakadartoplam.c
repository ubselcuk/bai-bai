#include <stdio.h>

int main()
{
    int sayi;
    int toplam = 0;
    printf("Sayi giriniz\n");
    scanf("%d", &sayi);

    while (sayi > 0)
    {
        toplam = toplam + sayi;
        sayi--;
    }

    printf("Toplam = %d", toplam);

    return 0;
}