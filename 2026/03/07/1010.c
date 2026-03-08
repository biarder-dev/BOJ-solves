#include <stdio.h>

int tri[31][31];

void set_tri(void)
{
    int i, j;

    for (i = 0; i < 31; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                tri[i][j] = 1;
            else
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
        }
    }
}

int main(void)
{
    int n, m, r, t;
    int i, j, k;

    set_tri();

    r = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", tri[m][n]);
    }
}
