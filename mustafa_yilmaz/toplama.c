#include <stdio.h>

int main() {
    int sayi1, sayi2, toplam;

    printf("Birinci sayıyı girin: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı girin: ");
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;

    printf("Toplam: %d\n", toplam);

    return 0;
}
