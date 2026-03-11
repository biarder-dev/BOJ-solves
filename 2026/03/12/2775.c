#include <stdio.h>

#define INPUT_MAX 15

long long arr[INPUT_MAX][INPUT_MAX];

int main(void)
{
    for (int i = 0; i < INPUT_MAX; i++)
        arr[i][0] = 1;
    for (int i = 0; i < INPUT_MAX; i++)
        arr[0][i] = i + 1;

    for (int i = 1; i < INPUT_MAX; i++)
        for (int j = 1; j < INPUT_MAX; j++)
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

    int tc;
    if (scanf("%d", &tc) != 1) return -1;

    while (tc--) {
        int k, n;
        if (scanf("%d %d", &k, &n) != 2) return -1;

        printf("%lld\n", arr[k][n - 1]);
    }

    return 0;
}
