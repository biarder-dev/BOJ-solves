#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 128

int main(void)
{
    int tc;
    if (scanf("%d", &tc) != 1)
        return -1;

    while (tc--) {
        char input[BUFFER_SIZE];
        scanf("%s", input);
        input[BUFFER_SIZE - 1] = '\0';
        input[strcspn(input, "\n")] = '\0';

        int result = 0;
        int streak = 0;
        int input_len = strlen(input);
        for (int i = 0; i < input_len; i++) {
            if (input[i] == 'O') {
                result += streak + 1;
                streak++;
            } else {
                streak = 0;
            }
        }

        printf("%d\n", result);
    }
}
