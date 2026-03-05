#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;
    struct tm *tm;

    now = time(NULL);
    tm = localtime(&now);

    printf("%d-%02d-%02d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
    return 0;
}
