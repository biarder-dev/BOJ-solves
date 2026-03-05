#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long BASE = 1000000000000000000LL;

int main(void)
{
    char str_a[10008], str_b[10008], tmp[19];
    char *real_str_a, *real_str_b;
    long long a[600], b[600], res[600];
    int a_neg, b_neg, res_neg;
    int cmp;
    int is_padding, idx, i, j;
    int start, end, count;

    memset(str_a, 0, sizeof(str_a));
    memset(str_b, 0, sizeof(str_b));
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(res, 0, sizeof(res));

    scanf("%10001s %10001s", str_a, str_b);

    a_neg = b_neg = 0;
    a_neg = (str_a[0] == '-') ? 1 : 0;
    b_neg = (str_b[0] == '-') ? 1 : 0;
    real_str_a = (a_neg) ? str_a + 1 : str_a;
    real_str_b = (b_neg) ? str_b + 1 : str_b;

    end = strlen(real_str_a);
    for (idx = 599; end > 0; end -= 18) {
        start = (end - 18 < 0) ? 0 : end - 18;
        count = end - start;

        memset(tmp, 0, sizeof(tmp));
        strncpy(tmp, real_str_a + start, count);

        a[idx--] = strtoll(tmp, NULL, 10);
    }

    end = strlen(real_str_b);
    for (idx = 599; end > 0; end -= 18) {
        start = (end - 18 < 0) ? 0 : end - 18;
        count = end - start;

        memset(tmp, 0, sizeof(tmp));
        strncpy(tmp, real_str_b + start, count);

        b[idx--] = strtoll(tmp, NULL, 10);
    }

    cmp = 0;
    for (i = 0; i < 600; i++) {
        if (a[i] > b[i]) {
            cmp = 1;
            break;
        } else if (a[i] < b[i]) {
            cmp = -1;
            break;
        }
        cmp = 0;
    }

    if (a_neg == b_neg) {
        for (i = 599; i >= 0; i--) {
            res_neg = a_neg;
            res[i] += a[i] + b[i];
            if (res[i] >= BASE) {
                res[i] -= BASE;
                if (i > 0)
                    res[i - 1]++;
            }
        }
    } else {
        if (cmp == 0)
            res_neg = 0;
        else if (cmp > 0) {
            res_neg = a_neg;
            for (i = 599; i >= 0; i--) {
                res[i] += a[i] - b[i];
                if (res[i] < 0) {
                    res[i] += BASE;
                    if (i > 0)
                        res[i - 1]--;
                }
            }
        } else if (cmp < 0) {
            res_neg = b_neg;
            for (i = 599; i >= 0; i--) {
                res[i] += b[i] - a[i];
                if (res[i] < 0) {
                    res[i] += BASE;
                    if (i > 0)
                        res[i - 1]--;
                }
            }
        }
    }

    is_padding = 1;
    for (i = 0; i < 600; i++) {
        if (is_padding) {
            if (res[i] != 0) {
                if (res_neg)
                    putchar('-');
                printf("%lld", res[i]);
                is_padding = 0;
            }
            continue;
        }
        printf("%018lld", res[i]);
    }
    if (is_padding)
        printf("0");

    putchar('\n');
    return 0;
}
