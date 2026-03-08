#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return -1;

    int input, min, max;
    if (scanf("%d", &input) != 1)
        return -1;
    min = max = input;
    n--;

    while (n--) {
        if (scanf("%d", &input) != 1)
            return -1;

        if (input > max)
            max = input;
        if (input < min)
            min = input;
    }

    printf("%d %d\n", min, max);
    return 0;
}
