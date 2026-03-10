#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    while (1) {
        char input[10001];
        if (scanf("%s", input) != 1)
            return -1;
        input[strcspn(input, "\n")] = '\0';
        int input_len = strlen(input);

        if (atoi(input) == 0)
            break;

        /*
        int start;
        for (int i = 0; i < input_len; i++) {
            if (input[i] != '0') {
                start = i;
                break;
            }
        }
        */

        int is_palindrome = 1;
        for (int i = 0; i < input_len; i++) {
            if (input[i] != input[input_len - i - 1]) {
                is_palindrome = 0;
                break;
            }
        }

        printf("%s\n", (is_palindrome) ? "yes" : "no");
    }

    return 0;
}
