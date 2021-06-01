#include <stdio.h>
#include <time.h>

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("time = %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("date = %d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
    return 0;
}