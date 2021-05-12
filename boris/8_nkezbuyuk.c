#include <stdio.h>

int main()
{
    int sayi, input, max = 0;

    printf("Kac sayi girmek istiyorsunuz?\n");
    scanf("%d", &sayi);

    while (sayi > 0)
    {
        printf("> ");
        scanf("%d", &input);

        if (input > max)
            max = input;
        
        sayi--;
    }

    printf("Girilen sayilardan en buyugu: %d", max);

    return 0;
}