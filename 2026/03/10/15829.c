#include <stdio.h>

#define R 31
#define M 1234567891

int main(void)
{
    int l;
    if (scanf("%d", &l) != 1)
        return -1;

    char input[51];
    if (scanf("%s", input) != 1)
        return -1;

    long long hash = 0, current_r = 1;
    for (int i = 0; i < l; i++) {
        long long a_i = input[i] - 'a' + 1;
        hash = (hash + (a_i * current_r)) % M;
        current_r = (current_r * R) % M;
    }

    printf("%lld\n", hash);
    return 0;
}
