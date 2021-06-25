#include <stdio.h>

int main(void) {
    char text[50];
    int i = 0, s;

    for (int f = 0; f < 50; f++) {
        text[f] = '\000';
    }

    printf("Bir metin gir.\n");
    gets(text);

    while (text[i] != '\000') {

        while (text[i] != ' ') {

            if (text[i] == '\000'){
                break;
            }

            i++;

        }

        s = (i - 1);
        i++;

        while (s >= 0) {

            if (text[s] == ' ') {
                break;
            }
            else {
                printf("%c", text[s]);
            }
            s--;

        }

        printf(" ");
    }

}

