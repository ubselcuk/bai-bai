#include <stdio.h>

int main()
{
    int yukseklik , i_1 , i_2;
    printf("piramidin yuksekligi:");
    scanf("%d",&yukseklik);
    for(i_1 = 1; i_1 <= yukseklik; i_1++)
    {
        for (i_2 = 0; i_2 < i_1 ; i_2++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}