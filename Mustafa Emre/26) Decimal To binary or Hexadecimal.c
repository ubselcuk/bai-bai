#include <stdio.h>

int Ikilik(int x) {
    int i, k[30];
    i = 0;
    while (x >= 1) {
        i++;
        k[i] = x % 2;
        x = x / 2;
    }
    printf("\nIkilik taban karsiligi:");
    for (i = i; i > 0; i--)
        printf("%d", k[i]);
}

int Onaltilik(int x) {
    int i;
    char k[30];
    char temp;
    i = 0;
    while (x >= 1) {
        i++;
        if((x % 16)<=9)
            temp = (x%16)+'0';
        else if((x % 16)==10)
            temp = 'A';
        else if((x % 16)==11)
            temp = 'B';
        else if((x % 16)==12)
            temp = 'C';
        else if((x % 16)==13)
            temp = 'D';
        else if((x % 16)==14)
            temp = 'E';
        else if((x % 16)==15)
            temp = 'D';
        else{}
        k[i]=temp;
        x = x / 16;
    }
    printf("\nOnAltilik taban karsiligi:");
    for (i = i; i > 0; i--)
        printf("%c", k[i]);
}

int main() {
    int a;
    printf("Bir sayi giriniz:");
    scanf("%d", &a);
    Ikilik(a);
    Onaltilik(a);
    return (0);
}