#include <stdio.h>

#define BUF_SIZE 16

int main(void)
{
    int a, b, c;
    char buf[BUF_SIZE];
    fgets(buf, sizeof(buf), stdin);

    a = (int)(buf[0] - '0');
    b = (int)(buf[4] - '0');
    c = (int)(buf[8] - '0');

    printf("%s\n", ((a + b) == c) ? "YES" : "NO");
    return 0;
}
