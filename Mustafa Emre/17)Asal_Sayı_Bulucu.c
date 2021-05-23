#include <stdio.h>
int main (void){
    int sorgulanacak_sayi,i,flag = 0;
    printf("Asal sayi sorgulamasi yapilacak sayi:");
    scanf("%d",&sorgulanacak_sayi);
   if (sorgulanacak_sayi==2){
        printf("2 bir asal sayidir");
        return 0;
    }
    for ( i = 2; i < sorgulanacak_sayi; i++){   
        if (sorgulanacak_sayi%i != 0)
        flag = 1;
        else{
            flag = 0;
            break;
        }
    }
    if((flag == 0) || (sorgulanacak_sayi == 1))
        printf("%d Asal sayi degil",sorgulanacak_sayi);
    else
        printf("%d Asal sayi ",sorgulanacak_sayi);
    
    return 0;
}