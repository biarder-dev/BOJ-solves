#include <stdio.h>

int main(void)
{
    int input, i;
    char nums[30];

    for (i = 0; i < 30; i++)
        nums[i] = i + 1;

    for (i = 0; i < 28; i++) {
        scanf("%d", &input);
        nums[input - 1] = 0;
    }

    for (i = 0; i < 30; i++)
        if (nums[i] == 0)
            continue;
        else
            printf("%d\n", nums[i]);
}
