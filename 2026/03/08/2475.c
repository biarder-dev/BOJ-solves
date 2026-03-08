#include <stdio.h>

#define INPUTS 5
#define SQ(x) ((x) * (x))

int main(void)
{
    int inputs[INPUTS];
    for (int i = 0; i < INPUTS; i++) {
        scanf("%d", inputs + i);
    }

    int result = 0;
    for (int i = 0; i < INPUTS; i++) {
        result += SQ(inputs[i]);
    }
    result %= 10;

    printf("%d\n", result);
    return 0;
}
