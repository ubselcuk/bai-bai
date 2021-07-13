#include <stdlib.h>

int main(void)
{
    #ifdef _WIN32
    system("dir /A:-D /B\n");
    #else
    system("ls");
    #endif
}