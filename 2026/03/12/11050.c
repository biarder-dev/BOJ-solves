#include <stdio.h>

#define MAX_N 11
#define MAX_R 11

int tri[MAX_N][MAX_R];

void set_tri(void)
{
    for (int i = 0; i < MAX_N; i++)
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                tri[i][j] = 1;
            else 
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
        }
}


int main(void)
{
    set_tri();

    int n, r;
    if (scanf("%d %d", &n, &r) != 2) return -1;

    printf("%d\n", tri[n][r]);
    return 0;
}
