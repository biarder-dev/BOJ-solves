#include <stdio.h>

#define SQ(x) ((x) * (x))
int abs(int num)
{
    if (num < 0)
        num *= -1;
    return num;
}

int main(void)
{
    int x1, x2, y1, y2, r1, r2;
    int dst_sq, rsum_sq, rsub_sq, t, i;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        dst_sq = SQ(x1 - x2) + SQ(y1 - y2);
        rsum_sq = SQ(r1 + r2);
        rsub_sq = SQ(abs(r1 - r2));

        if (x1 == x2 && y1 == y2 && r1 == r2)
            printf("-1\n");
        else if (rsum_sq > dst_sq && rsub_sq < dst_sq)
            printf("2\n");
        else if (rsum_sq == dst_sq || rsub_sq == dst_sq)
            printf("1\n");
        else {
            printf("0\n");
        }
    }
}
