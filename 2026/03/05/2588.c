#include <stdio.h>
#include <stdlib.h>

int int_pow(int base, int expo)
{
    int result, i;

    result = 1;
    for (i = 0; i < expo; i++)
        result *= base;

    return result;
}

int get_nod(int num, int digit)
{
    int i;

    for (i = 0; i < digit - 1; i++)
        num /= 10;
    return num % 10;
}

int get_digit(int num)
{
    int i;
    if (num == 0)
        return 1;
    for (i = 0; num > 0; i++)
        num /= 10;
    return i;
}

int main(void)
{
    int a, b, i;
    int digit, result;
    int *tmp;

    scanf("%d\n%d", &a, &b);

    digit = get_digit(b);
    tmp = (int *)malloc(sizeof(int) * digit);

    result = 0;
    for (i = 0; i < digit; i++) {
        tmp[i] = a * get_nod(b, i + 1);
        result += tmp[i] * int_pow(10, i);
        printf("%d\n", tmp[i]);
    }
    printf("%d\n", result);

    free(tmp);
    return 0;
}
