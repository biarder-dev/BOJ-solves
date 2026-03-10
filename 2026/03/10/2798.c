#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
        return -1;

    int *tmp = (int *)malloc(sizeof(int) * n);
    if (tmp == NULL)
        return -1;

    int *input = tmp;
    for (int i = 0; i < n; i++)
        if (scanf("%d", input + i) != 1)
            return -1;

    int max = 0;
    for (int i = n - 1; i > 1; i--)
        for (int j = i - 1; j > 0; j--)
            for (int k = j - 1; k >= 0; k--) {
                int sum = input[i] + input[j] + input[k];
                if (sum <= m && sum > max)
                    max = sum;
            }

    printf("%d\n", max);
    free(input);
    return 0;
}
