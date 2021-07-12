#include <stdio.h>

int main(){
    int sayi_1,sayi_2,sayi_3,en_buyuk;
	printf("Birinci sayi: ");
    scanf("%d",&sayi_1);
	printf("\nIkinci sayi: ");
    scanf("%d",&sayi_2);
    printf("\nUcuncu sayi: ");
    scanf("%d",&sayi_3);
    
    if (sayi_1<sayi_2)
    {
        en_buyuk = sayi_2;
    }
    if (sayi_2<sayi_3)
    {
        en_buyuk = sayi_3;
    }
    if (sayi_3<sayi_1)
    {
        en_buyuk = sayi_1;
    }

    printf("Girilen saiylardan en buyugu:%d",en_buyuk);
	
    return 0;
}