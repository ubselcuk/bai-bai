#include <stdio.h>

void topla(float x, float y) { printf("Cevap = %0.1f", (x + y)); }

void cikar(float x, float y) { printf("Cevap = %0.1f", (x - y)); }

void bol(float x, float y) { printf("Cevap = %0.1f", (x / y)); }

void carp(float x, float y) { printf("Cevap = %0.1f", (x * y)); }

int main(void)
{
    float x, y;
    char a;
    printf("Yapmak istediginiz islemi giriniz (+ - * /): ");
    scanf("%c", &a);
    printf("Ilk sayiyi giriniz: ");
    scanf("%f", &x);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%f", &y);

    switch (a)
    {
    case '+':
        topla(x, y);
        break;
    case '-':
        cikar(x, y);
        break;
    case '/':
        bol(x, y);
        break;
    case '*':
        carp(x, y);
        break;
    default:
        printf("Hatali giris yaptiniz");
        break;
    }

    return 0;
}