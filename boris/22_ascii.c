#include <stdio.h>

int main()
{

    char word[50];
    int i = 0;

    printf("Enter something: ");
    scanf("%s", word);

    while (word[i])
    {
        printf("[%d] ", word[i++]);
    }

    return 0;
}