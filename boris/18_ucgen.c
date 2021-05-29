#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Ucgenin bir kenarini giriniz: ");
    scanf("%d", &a);
    printf("Ucgenin diger kenarini giriniz: ");
    scanf("%d", &b);

    c = sqrt(a * a + b * b);

    printf("Ucgenin diger kenari = %d", c);

    return 0;
}