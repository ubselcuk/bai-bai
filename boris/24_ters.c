#include <stdio.h>
#include <string.h>

void main()
{
    char metin[100];
    char ters[100];

    int uzunluk = 0;
    int n = 0;

    printf("\n Bir metin giriniz : ");
    gets(metin);

    uzunluk = strlen(metin);

    for (n = 0; n < uzunluk; n++)
    {
        ters[n] = metin[uzunluk - 1 - n];
    }

    ters[n] = '\0';

    printf("\n Metnin Tersi  : %s", ters);
}