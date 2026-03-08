#include <stdio.h>

int main(void)
{
    char input[1024];
    int idx;

    if (scanf("%s", input) < 0)
        return 0;
    if (scanf("%d", &idx) < 0)
        return 0;

    printf("%c\n", input[idx - 1]);

    return 0;
}
