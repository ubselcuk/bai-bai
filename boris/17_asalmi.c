#include <stdio.h>

int main()
{
    int a, b;
    int flag = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &a);
    b = a - 1;

    while (b > 1)
    {
        if (a % b == 0)
        {
            flag = 1;
        }
        b--;
    }

    if (flag == 0)
        printf("Sayi asal\n");

    else
        printf("Sayi asal degil\n");

    return 0;
}