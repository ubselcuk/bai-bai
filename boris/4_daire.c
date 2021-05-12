#include <stdio.h>
#define pi 3.14

int main(void)
{
    float yaricap;
    float alan;
    float cevre;

    printf("Darirenin yaricapini giriniz\n");
    scanf("%f", &yaricap);

    alan = pi * yaricap * yaricap;
    cevre = 2 * pi * yaricap;

    printf("Dairenin alani = %0.2f\n", alan);
    printf("Dairenin cevresi = %0.2f\n", cevre);

    return 0;
}