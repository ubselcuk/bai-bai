#include <stdio.h>

int main()
{
    int toplam = 0;
    int input = 0;
    int sayi = 0;

    printf("-1 girene kadar sayı okuyacak\n");

    while(input != -1)
    {
        printf("> ");
        scanf("%d",&input);
        toplam = toplam + input;
        sayi++;
    }

    printf("Aritmetik ortalama = %d",((toplam+1)/(sayi-1)));

    return 0;
}