#include <stdio.h>
#include <string.h>

int main(void)
{
    int tc;
    if (scanf("%d", &tc) != 1)
        return -1;

    while (tc--) {
        int repeat;
        char string[32];
        scanf("%d %s", &repeat, string);

        int string_len = strlen(string);
        for (int i = 0; i < string_len; i++) {
            for (int j = 0; j < repeat; j++) {
                putchar(string[i]);
            }
        }
        putchar('\n');
    }
}
