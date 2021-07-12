#include <stdio.h>
#include <conio.h>
int main(void) {
    int dizi_uzunluk, tarayici,j=0;
    printf("Kaca kadar olan asaş sayiları ariyorsunuz\nSayı:");
    scanf("%d", &dizi_uzunluk);
    int dizi[dizi_uzunluk - 1];
    int *diziptr = dizi;
    for (int i = 0; i < dizi_uzunluk - 1; i++)
        dizi[i] = i + 2;
    for (int j = 0; j < dizi_uzunluk - 1; ++j) {
        tarayici = dizi[j];
        for (int k = j; k < dizi_uzunluk - 1; ++k) {
            if (tarayici != 0) {
                if (*(diziptr + (k + 1)) % tarayici == 0 && (*(diziptr + (k + 1)) != 0)) {
                    *(diziptr + (k + 1)) = 0;
                }
            }
        }
    }
    j=0;
    for (int i = 0; i < dizi_uzunluk - 1;i++) {
        if (*(diziptr+i) != 0){
            printf("%d.eleman:%d\n", j+1, dizi[i]);
            j++;
        }
    }
    getch();
    return 0;
}