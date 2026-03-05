#include <ctype.h>
#include <stdio.h>

#define BUF_SIZE 1000008

int main(void)
{
    int i;
    char buf[BUF_SIZE];

    scanf("%s", buf);
    for (i = 0; i < BUF_SIZE; i++)
        buf[i] = (char)toupper(buf[i]);
    printf("%s\n", buf);
}
