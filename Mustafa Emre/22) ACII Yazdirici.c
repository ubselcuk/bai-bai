#include  <stdio.h>

int main(void){
    char text[50];
    int i = 0;
    printf("Bir metin giriniz.\n");
    fflush(stdout);
    gets(text);
    while (text[i]!='\0'){
        if (text[i] != 32)
            printf("'%c' = %d ",text[i],text[i]);
        else
            printf("\n'%c' = %d\n",text[i],text[i]);
        i++;
    }




}