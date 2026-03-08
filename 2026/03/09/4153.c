#include <stdio.h>

#define MAX_INPUT 3
#define SQ(x) ((x) * (x))

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int is_right(int a, int b, int c) { return SQ(a) + SQ(b) == SQ(c); }

int main(void)
{
    int a, b, c;
    while (1) {
        if (scanf("%d %d %d", &a, &b, &c) != 3)
            return -1;
        if (a == 0 && b == 0 && c == 0)
            break;

        if (a > b)
            swap(&a, &b);
        if (b > c)
            swap(&b, &c);

        if (is_right(a, b, c)) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }

    return 0;
}
