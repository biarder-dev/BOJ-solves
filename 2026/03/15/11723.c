#include <stdio.h>
#include <string.h>

int main(void)
{
    int tc;
    if (scanf("%d", &tc) != 1) return -1;

    unsigned int set = 0;
    while (tc--) {
        char op[8];
        int oprnd;
        if (scanf("%s", op) != 1) return -1;

        if (strcmp(op, "all") == 0) {
            for (int i = 0; i < 32; i++)
                set |= (1 << i);
            continue;
        } else if (strcmp(op, "empty") == 0) {
            set = 0;
            continue;
        }


        if (scanf("%d", &oprnd) != 1) return -1;
        int mask = (1 << oprnd);
        if (strcmp(op, "add") == 0)
            set |= mask;
        else if (strcmp(op, "remove") == 0)
            set &= ~mask;
        else if (strcmp(op, "toggle") == 0)
            set ^= mask;
        else if (strcmp(op, "check") == 0)
            printf("%d\n", ((set & mask) > 0) ? 1 : 0);
    }

    return 0;
}
