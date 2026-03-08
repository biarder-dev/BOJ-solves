#include <stdio.h>
#include <string.h>

#define MAX_INPUT 10
#define DIVISOR 42

int main(void)
{
    int input[MAX_INPUT];
    memset(input, 0, sizeof(input));
    for (int i = 0; i < MAX_INPUT; i++)
        if (scanf("%d", input + i) != 1)
            return -1;

    int counter[DIVISOR];
    memset(counter, 0, sizeof(counter));
    for (int i = 0; i < MAX_INPUT; i++)
        counter[input[i] % DIVISOR]++;

    int result = 0;
    for (int i = 0; i < DIVISOR; i++)
        if (counter[i] > 0)
            result++;

    printf("%d\n", result);
}
