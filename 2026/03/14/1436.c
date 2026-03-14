#include <stdio.h>

int is_dvlno(int n)
{
    int count = 0;
    while (n != 0) {
        if (n % 10 == 6) {
            count++;
            if (count >= 3)
                return 1;
        } else {
            count = 0;
        }

        n /= 10;
    }

    return 0;
}

int main(void)
{
    int input;
    if (scanf("%d", &input) != 1) return -1;

    int idx;
    int count = 1;
    for (idx = 0; count <= input; idx++)
        if (is_dvlno(idx))
            count++;

    printf("%d\n", idx - 1);
    return 0;
}
