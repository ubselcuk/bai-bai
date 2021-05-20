#include <stdio.h>

int main()
{
    int sayi, toplam = 0;
    printf("Sayiyi giriniz\n");
    scanf("%d", &sayi);

    while (sayi > 0)
    {
        toplam = toplam + (sayi % 10);
        sayi = sayi / 10;
    }

    printf("toplam = %d", toplam);

    return 0;
}