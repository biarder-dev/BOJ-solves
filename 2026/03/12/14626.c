#include <stdio.h>

#define CODE_LEN 13

int main(void)
{
    char input[CODE_LEN + 1];
    if (scanf("%s", input) != 1) return -1;

    int sum = 0;
    int is_star_even = 0;
    for (int i = 0; i < CODE_LEN; i++) {
        if (input[i] == '*')
            is_star_even = i & 1;
        else   
            sum += (input[i] - '0') * (i & 1 ? 3 : 1);
    }

    sum %= 10;
    if (is_star_even) {
        for (int i = 0; i < 10; i++)
            if (((sum + (i * 3)) % 10) == 0) 
                printf("%d\n", i);
    } else {
        printf("%d\n", (10 - sum) % 10);
    }

    return 0;
}
