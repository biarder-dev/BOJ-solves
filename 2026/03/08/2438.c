#include <stdio.h>

int main(void)
{
    int lines;
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}
