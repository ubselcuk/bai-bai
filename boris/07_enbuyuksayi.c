#include <stdio.h>

int main()
{
    int a, b, c;
    printf("3 sayi giriniz:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && b > c)
    {
        printf("En buyuk sayi = %d\n", a);
    }

    else if (b > a && a > c)
    {
        printf("En buyuk sayi = %d\n", b);
    }
    else
    {
        printf("En buyuk sayi = %d\n", c);
    }

    return 0;
}