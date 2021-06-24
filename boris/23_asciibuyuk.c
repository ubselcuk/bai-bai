#include <stdio.h>

int main()
{

    char word[50];
    int i = 0;
    int test = 0;

    printf("Enter something: ");
    scanf("%s", word);

    while (word[i])
    {
        test = word[i++];

        if (test > 96 && test < 123)
        {
            test = test - 32;
        }

        printf("%c", test);
    }

    return 0;
}