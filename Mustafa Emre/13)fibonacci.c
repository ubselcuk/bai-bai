#include <stdio.h>

int main()
{
    int counter = 20 , i = 1 , temp , onceki = 0, simdiki = 1;
    for(i = 0 ; i < counter; i++)
    {
        printf("dizinin %d.elemani:%d\n",i+1,simdiki);
        temp = simdiki;
        simdiki=onceki+simdiki;
        onceki = temp;
    }
    return 0;
}