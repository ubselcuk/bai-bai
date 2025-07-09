#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Basit Hesap Makinesi\n");
    printf("Birinci sayiyi girin: ");
    scanf("%lf", &num1);
    printf("Islemi girin (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Sonuc: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Sonuc: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Sonuc: %.2lf\n", result);
            break;
        case '/':
            if(num2 != 0)
                printf("Sonuc: %.2lf\n", num1 / num2);
            else
                printf("Hata: Sifira bolme yapilamaz!\n");
            break;
        default:
            printf("Gecersiz islem!\n");
    }

    return 0;
}
