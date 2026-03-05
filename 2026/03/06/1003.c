#include <stdio.h>

#define MAX_N 41

int main(void)
{
    int t, n, i;
    int zc[MAX_N], oc[MAX_N];

    zc[0] = 1;
    zc[1] = 0;
    oc[0] = 0;
    oc[1] = 1;
    for (i = 2; i < MAX_N; i++) {
        zc[i] = zc[i - 1] + zc[i - 2];
        oc[i] = oc[i - 1] + oc[i - 2];
    }

    if (scanf("%d", &t) < 0)
        return 0;
    for (i = 0; i < t; i++) {
        if (scanf("%d", &n) < 0)
            return 0;
        printf("%d %d\n", zc[n], oc[n]);
    }
}
