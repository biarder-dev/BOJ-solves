#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n * 100 >= m)
        printf("Yes\n");
    else
        printf("No\n");
}
