#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_INPUT 3

int is_numeric(const char *str)
{
    if (str == NULL || *str == '\0')
        return 0;

    while (*str)
        if (!isdigit(*str++))
            return 0;

    return 1;
}

int main(void)
{
    char input[MAX_INPUT][10];
    
    for (int i = 0; i < MAX_INPUT; i++)
        if (scanf("%s", input[i]) != 1)
            return -1;

    int idx;
    for (idx = 0; idx < MAX_INPUT; idx++)
        if (is_numeric(input[idx]))
            break;

    int curr = atoi(input[idx]) + (3 - idx);
    int is_div_three = !(curr % 3);
    int is_div_five = !(curr % 5);

    if (is_div_three && is_div_five)
        puts("FizzBuzz");
    else if (is_div_three)
        puts("Fizz");
    else if (is_div_five)
        puts("Buzz");
    else
        printf("%d\n", curr);

    return 0;
}
