#include <stdio.h>

int main(void)
{
    char inputs[1024];
    int result, n;

    if (scanf("%d", &n) < 0)
        return -1;
    if (scanf("%1023s", inputs) < 0)
        return -1;

    result = 0;
    for (int i = 0; i < n; i++) {
        result += inputs[i] - '0';
    }

    printf("%d\n", result);
    return 0;
}
