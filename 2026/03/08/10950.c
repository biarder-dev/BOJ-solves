#include <stdio.h>

int main(void)
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        int a, b;
        if (scanf("%d %d", &a, &b) < 0)
            return -1;
        printf("%d\n", a + b);
    }

    return 0;
}
