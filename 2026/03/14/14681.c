#include <stdio.h>

int main(void)
{
    int x, y;
    if (scanf("%d", &x) != 1) return -1;
    if (scanf("%d", &y) != 1) return -1;
    
    if (x > 0 && y > 0)
        printf("1\n");
    if (x < 0 && y > 0)
        printf("2\n");
    if (x < 0 && y < 0)
        printf("3\n");
    if (x > 0 && y < 0)
        printf("4\n");
    return 0;
}
