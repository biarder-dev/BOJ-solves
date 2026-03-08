#include <stdio.h>
#include <string.h>

#define INPUT_COUNT 3
#define BUFFER_SIZE 16
#define DECIMAL_BASE 10

int main(void)
{
    int input[INPUT_COUNT];
    for (int i = 0; i < INPUT_COUNT; i++)
        if (scanf("%d", input + i) != 1)
            return -1;

    int multiplied = 1;
    for (int i = 0; i < INPUT_COUNT; i++)
        multiplied *= input[i];

    char buffer[BUFFER_SIZE];
    memset(buffer, 0, sizeof(buffer));
    snprintf(buffer, sizeof(buffer), "%d", multiplied);
    size_t buffer_string_length = strlen(buffer);

    int counter[10];
    memset(counter, 0, sizeof(counter));
    for (int i = 0; i < (int)buffer_string_length; i++) {
        int digit = buffer[i] - '0';
        counter[digit]++;
    }

    for (int i = 0; i < DECIMAL_BASE; i++)
        printf("%d\n", counter[i]);
}
