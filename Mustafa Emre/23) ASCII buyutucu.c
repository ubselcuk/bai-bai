#include <stdio.h>

int main (void){
    char text[50];
    int i = 0;
    printf("Bir metin giriniz.\n");
    fflush(stdout);
    gets(text);
    while (text[i]!='\0'){
        if (text[i] != 32 && text[i]<90){
            printf("%c",text[i]);
            fflush(stdout);}
        else if(text[i] != 32 && (text[i]>=97) && (text[i]<=122)){
            printf("%c",(text[i]-32));
            fflush(stdout);}
        else{
            printf("%c",text[i]);
            fflush(stdout);}
        i++;
    }
}