#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE 20000
#define MAX_LEN 51

char input[MAX_LINE][MAX_LEN];

int cmp(const void *a, const void *b)
{
    int a_len = strlen((char *)a);
    int b_len = strlen((char *)b);

    if (a_len != b_len) return (a_len > b_len);
    return strcmp((char *)a, (char *)b);
}

int main(void)
{
    int tc;
    if (scanf("%d", &tc) != 1) return -1;

    for (int i = 0; i < tc; i++)
        if (scanf("%s", input[i]) != 1) return -1;

    qsort(input, tc, sizeof(*input), cmp);

    printf("%s\n", input[0]);
    for (int i = 1; i < tc; i++)
        if (strcmp(input[i], input[i - 1]))
            printf("%s\n", input[i]);

    return 0;
}
