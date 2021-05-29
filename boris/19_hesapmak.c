#include <stdio.h>

int main()
{
    float x,y;
    char a;
    printf("Yapmak istediginiz islemi giriniz (+ - * /): ");
    scanf("%c", &a);
    printf("Ilk sayiyi giriniz: ");
    scanf("%f",&x);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%f",&y);

    switch (a)
    {
    case '+':
        printf("Cevap = %0.1f",(x+y));
        break;
    case '-':
        printf("Cevap = %0.1f",(x-y));
        break;
    case '/':
        printf("Cevap = %0.1f",(x/y));
        break;
    case '*':
        printf("Cevap = %0.1f",(x*y));
        break;
    default:
        printf("Hatali giris yaptiniz");
        break;
    }

    return 0;
}