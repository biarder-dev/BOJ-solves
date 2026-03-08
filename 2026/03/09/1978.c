#include <stdio.h>

#define BUFFER_SIZE 1024

int prime_number[BUFFER_SIZE];

void set_table(void)
{
    for (int i = 0; i < BUFFER_SIZE; i++)
        prime_number[i] = i + 2;

    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (prime_number[i] == 0)
            continue;

        int curr = prime_number[i];
        for (int j = i + 1; j < BUFFER_SIZE; j++) {
            if (prime_number[j] > 0 && !(prime_number[j] % curr))
                prime_number[j] = 0;
        }
    }
}

int main(void)
{
    set_table();

    int n;
    if (scanf("%d", &n) != 1)
        return -1;

    int result = 0;
    for (int i = 0; i < n; i++) {
        int input;
        if (scanf("%d", &input) != 1)
            return 1;

        for (int j = 0; j < BUFFER_SIZE; j++)
            if (input == prime_number[j])
                result++;
    }

    printf("%d\n", result);
    return 0;
}
