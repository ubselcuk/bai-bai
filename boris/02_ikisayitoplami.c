#include <stdio.h>

int main(void)
{
    int sayi_a;
    int sayi_b;

    printf("Sayi 1'i giriniz\n");
    scanf("%d",&sayi_a);
    printf("Sayi 2'yi giriniz\n");
    scanf("%d",&sayi_b);

    printf("Iki sayinin toplami = %d\n", sayi_a + sayi_b);

    return 0;
}