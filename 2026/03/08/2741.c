#include <stdio.h>

int main(void)
{
    int input;
    if (scanf("%d", &input) < 0)
        return -1;

    for (int i = 0; i < input; i++) {
        printf("%d\n", i + 1);
    }
}
