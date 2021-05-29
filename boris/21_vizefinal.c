#include <stdio.h>

int main()
{
    float a, b, grade;
    printf("Vize notunu giriniz: ");
    scanf("%f", &a);
    printf("Final notunu giriniz: ");
    scanf("%f", &b);

    grade = (a * 40 / 100) + (b * 60 / 100);

    if (grade >= 70) printf("Notunuz %0.1f, gectiniz",grade);
    else printf("Notunuz %0.1f, gecemediniz",grade);

    return 0;
}
