#include <stdio.h>

int main(void)
{
    int input;

    if (scanf("%d", &input) < 0)
        return 0;

    for (int i = 0; i < input; i++) {
        for (int k = 0; k < input - i - 1; k++)
            putchar(' ');
        for (int k = 0; k <= i; k++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
