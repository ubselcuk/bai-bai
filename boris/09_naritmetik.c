#include <stdio.h>

int main()
{
    float sayi, input, toplam = 0;

    printf("Kac sayi girilecek?\n");
    scanf("%f", &sayi);

    for (int i = sayi; i > 0; i--)
    {
        printf("> ");
        scanf("%f", &input);
        toplam = toplam + input;
    }

    printf("Aritmetik ortalama = %0.1f\n", (toplam / sayi));

    return 0;
}