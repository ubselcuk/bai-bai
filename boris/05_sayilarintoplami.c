#include <stdio.h>

int main()
{
    int tek_sayi_toplami = 0;
    int cift_sayi_toplami = 0;
    int sayi = 0;
    printf("Sayi giriniz\n");
    scanf("%d", &sayi);

    while (sayi > 0)
    {
        if (sayi % 2 == 0)
        {
            cift_sayi_toplami = cift_sayi_toplami + sayi;
        }

        if (sayi % 2 == 1)
        {
            tek_sayi_toplami = tek_sayi_toplami + sayi;
        }

        sayi--;
    }

    printf("Tek sayi toplami = %d\n", tek_sayi_toplami);
    printf("Cift sayi toplami = %d\n", cift_sayi_toplami);

    return 0;
}