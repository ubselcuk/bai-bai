#include <stdio.h>

int main()
{
    int counter = 20 , i = 1 , temp , onceki = 0, simdiki = 1;
    printf("dizinin 1.elemani:1\n");
    for(i = 1 ; i < counter; i++)
    {
        temp = simdiki;
        simdiki=onceki+simdiki;
        onceki = temp;
        printf("dizinin %d.elemani:%d\n",i+1,simdiki);
    }
    return 0;
}