#include <stdio.h>

#define T_TYPES 6

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return -1;

    int t[T_TYPES];
    for (int i = 0; i < T_TYPES; i++)
        if (scanf("%d", t + i) != 1)
            return -1;

    int tb, pb; /* bundles */
    if (scanf("%d %d", &tb, &pb) != 2)
        return -1;

    int tr = 0; /* t-shirt result */
    for (int i = 0; i < T_TYPES; i++) {
        if (t[i] > 0) {
            if ((t[i] % tb) == 0)
                tr += (t[i] / tb);
            else
                tr += (t[i] / tb + 1);
        }
    }

    printf("%d\n", tr);
    printf("%d %d\n", n / pb, n % pb);
}
