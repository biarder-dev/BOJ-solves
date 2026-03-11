#include <stdio.h>
#include <string.h>

int main(void)
{
    char target[] = "aeiouAEIOU";

    while (1) {
        char input[260];
        memset(input, 0, sizeof(input));
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        int input_len = strlen(input);

        if (input[0] == '#')
            break;

        int result = 0;
        for (int i = 0; i < input_len; i++)
            for (int j = 0; j < 10; j++)
                if (input[i] == target[j]) {
                    result++;
                    break;
                }

        printf("%d\n", result);
    }

    return 0;
}
