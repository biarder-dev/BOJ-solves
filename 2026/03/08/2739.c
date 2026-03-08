#include <stdio.h>

int main(void)
{
    int input;
    if (scanf("%d", &input) < 0)
        return -1;

    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", input, i, input * i);
    }
}
