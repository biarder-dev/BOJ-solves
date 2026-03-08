#include <stdio.h>

int main(void)
{
    int year;
    if (scanf("%d", &year) < 0)
        return -1;

    int result = 0;
    if ((year % 4) == 0) {
        if ((year % 100) != 0 || (year % 400) == 0) {
            result = 1;
        } else {
            result = 0;
        }
    } else {
        result = 0;
    }

    printf("%d\n", result);
    return 0;
}
