#include <stdio.h>

int get_gcd(int a, int b)
{
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
        return -1;

    int gcd = get_gcd(a, b);
    int lcm = (a * b) / gcd;

    printf("%d\n", gcd);
    printf("%d\n", lcm);
    return 0;
}
