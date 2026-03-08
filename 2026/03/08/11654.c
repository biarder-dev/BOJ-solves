#include <stdio.h>

int main(void)
{
    char input;

    if (scanf("%c", &input) < 0)
        return 0;
    printf("%d\n", input);

    return 0;
}
