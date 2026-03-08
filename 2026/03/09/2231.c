#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return -1;

    int temp = n;
    int digit = 0;
    while (temp > 0) {
        temp /= 10;
        digit++;
    }

    int start = n - (digit * 9);

    int result = 0;
    for (int i = start; i < n; i++) {
        int sum = i, num = i;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);
    return 0;
}
