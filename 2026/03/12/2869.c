#include <stdio.h>

int main(void)
{
    int a, b, v;
    if (scanf("%d %d %d", &a, &b, &v) != 3) return -1;

    int result = 1;
    while (a < v) {
        int tmp = v / a;
        result += tmp;
        v -= tmp * (a - b);
    }

    printf("%d\n", result);
    return 0;
}
