#include <stdio.h>

int main(void)
{
    int len, i, j;
    int lens[80];
    char ch[80];

    scanf("%d", &len);
    for (i = 0; i < len; i++)
        scanf("%d %c", lens + i, ch + i);

    for (i = 0; i < len; i++) {
        for (j = 0; j < lens[i]; j++)
            putchar(ch[i]);
        putchar('\n');
    }
}
