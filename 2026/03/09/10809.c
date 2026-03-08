#include <stdio.h>
#include <string.h>

#define MAX_INPUT 128
#define ALPHABET_COUNT 26

int main(void)
{
    char input[MAX_INPUT];
    scanf("%s", input);
    input[strcspn(input, "\n")] = '\0';

    char result[ALPHABET_COUNT];
    memset(result, -1, sizeof(result));

    int input_len = strlen(input);
    for (int i = 0; i < input_len; i++) {
        int idx = input[i] - 'a';

        if (result[idx] == -1)
            result[idx] = i;
    }

    for (int i = 0; i < ALPHABET_COUNT; i++) {
        printf("%d ", result[i]);
    }
    putchar('\n');

    return 0;
}
