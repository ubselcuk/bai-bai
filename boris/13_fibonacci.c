#include <stdio.h>

int main()
{
    int f1 = 0, f2 = 1, i;
    printf("%d ", f1);

    for (i = 1; i < 20; i++)
    {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }

    return 0;
}