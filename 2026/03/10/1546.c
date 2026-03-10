#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count;
    if (scanf("%d", &count) != 1)
        return -1;

    int *input = (int *)malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++)
        if (scanf("%d", input + i) != 1)
            return -1;

    int biggest = 0;
    int sum = 0;
    for (int i = 0; i < count; i++) {
        int tmp = input[i];
        if (tmp > biggest)
            biggest = tmp;
        sum += tmp;
    }

    float result = ((float)sum / (float)count) / (float)biggest * 100;
    printf("%.2f\n", result);

    free(input);
    return 0;
}
