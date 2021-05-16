#include <stdio.h>

int main()
{
    int a, b, sonuc = 0;
    printf("2 sayi giriniz\n");
    scanf("%d%d", &a, &b);

    while (a > 0)
    {
        sonuc = sonuc + b;
        a--;
    }

    printf("Sonuc = %d", sonuc);

    return 0;
}