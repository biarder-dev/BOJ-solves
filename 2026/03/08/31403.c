#include <stdio.h>

#define MAX_INPUT 9

int main(void)
{
    int input, max;

    max = 0;
    int max_idx = 0;
    for (int i = 0; i < MAX_INPUT; i++)
        if (scanf("%d", &input))
            if (input > max) {
                max = input;
                max_idx = i + 1;
            }

    printf("%d\n", max);
    printf("%d\n", max_idx);
}
