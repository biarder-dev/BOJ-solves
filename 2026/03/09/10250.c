#include <stdio.h>

int main(void)
{
    int tc;
    if (scanf("%d", &tc) != 1)
        return -1;

    while (tc--) {
        int h, w, n;
        if (scanf("%d %d %d", &h, &w, &n) != 3)
            return -1;

        int floor = n % h;
        int room = n / h + 1;

        if (floor == 0) {
            floor = h;
            room -= 1;
        }

        printf("%d%02d\n", floor, room);
    }
}
