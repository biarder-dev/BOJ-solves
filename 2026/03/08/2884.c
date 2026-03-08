#include <endian.h>
#include <stdio.h>

#define H_BASE 24
#define M_BASE 60
#define OFFSET 45 /* In minute */

int hour, minute;

void dec_min(int dec)
{
    if (minute >= dec) {
        minute -= dec;
    } else {
        minute -= dec;
        minute = M_BASE + minute;
        hour = ((hour - 1) < 0) ? H_BASE - 1 : (hour - 1);
    }
}

int main(void)
{
    if (scanf("%d %d", &hour, &minute) < 0)
        return -1;

    dec_min(OFFSET);
    printf("%d %d\n", hour, minute);

    return 0;
}
