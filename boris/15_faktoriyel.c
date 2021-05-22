#include <stdio.h>

int main()
{
    int input, sonuc = 1;
    printf("Sayi giriniz\n");
    scanf("%d", &input);

    while (input > 1)
    {
        sonuc = sonuc * input;
        input--;
    }

    printf("Faktoriyel = %d", sonuc);

    return 0;
}