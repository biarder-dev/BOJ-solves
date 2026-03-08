#include <stdio.h>

#define SEQUENCE_MAX_LEN 10000
int sequence[SEQUENCE_MAX_LEN];

int main(void)
{
    int sequence_len, x;
    scanf("%d %d", &sequence_len, &x);

    for (int i = 0; i < sequence_len; i++) {
        int input;
        if (scanf("%d", &input) < 0)
            return -1;
        sequence[i] = input;
    }

    for (int i = 0; i < sequence_len; i++)
        if (sequence[i] < x)
            printf("%d ", sequence[i]);
    putchar('\n');
    return 0;
}
