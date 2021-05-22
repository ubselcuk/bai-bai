#include <stdio.h>

int main()
{
    int a;
    printf("Ucgen boyutunu yaziniz\n");
    scanf("%d", &a);
    printf("\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = -1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}