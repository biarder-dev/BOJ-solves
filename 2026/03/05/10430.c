#include <stdio.h>

#define RESUL_COUNT 4

int main(void)
{
    int a, b, c, i;
    int result[RESUL_COUNT];

    scanf("%d %d %d", &a, &b, &c);

    result[0] = (a + b) % c;
    result[1] = ((a % c) + (b % c)) % c;
    result[2] = (a * b) % c;
    result[3] = ((a % c) * (b % c)) % c;

    for (i = 0; i < RESUL_COUNT; i++)
        printf("%d\n", result[i]);
}
