#include <stdio.h>
#include <string.h>

#define BUF_SIZE 32

int main(void)
{
    int i;
    char buf[BUF_SIZE];

    scanf("%s", buf);
    if (strcmp(buf, "SONGDO") == 0)
        printf("HIGHSCHOOL");
    else if (strcmp(buf, "CODE") == 0)
        printf("MASTER");
    else if (strcmp(buf, "2023") == 0)
        printf("0611");
    else if (strcmp(buf, "ALGORITHM") == 0)
        printf("CONTEST");

    return 0;
}
