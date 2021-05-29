#include <stdio.h>

int main()
{
    int flag = 0;
    float vize, final , not;
    while(flag != 1){
        printf("Vize notunu giriniz: ");
        scanf("%f", &vize);
        if((vize<=100)&&(vize>=0))
            flag = 1;
        else
            printf("Lutfen notunuzu 0 ve 100 araligindan seciniz.\n");
        
    }
    flag = 0;
    while(flag != 1){
        printf("Final notunu giriniz: ");
        scanf("%f", &final);
        if((final<=100)&&(final>=0))
            flag = 1;
        else
            printf("Lutfen notunuzu 0 ve 100 araligindan seciniz.\n");
        
    }
    

    not = (vize * 40 / 100) + (final * 60 / 100);

    if (not >= 70) 
        printf("Notunuz %0.1f, gectiniz",not);
    else 
        printf("Notunuz %0.1f, gecemediniz",not);

    return 0;
}