#include <stdio.h>

int main() {
    int N, toplam = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        toplam += i;
    }

    printf("1'den %d'ye kadar olan sayilarin toplami: %d\n", N, toplam);

    return 0;
}
