#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return -1;

    int count[10000];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < n; i++) {
        int input;
        if (scanf("%d", &input) != 1) return -1;

        count[input - 1]++;
    }

    for (int i = 0; i < 10000; i++)
        for (int j = 0; j < count[i]; j++)
            printf("%d\n", i + 1);
    return 0;
}
