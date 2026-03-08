#include <stdbool.h>
#include <stdio.h>

#define NOTES_IN_SCLAE 8

int main(void)
{
    int notes[NOTES_IN_SCLAE];

    for (int i = 0; i < NOTES_IN_SCLAE; i++)
        if (scanf("%d", notes + i) < 0)
            return -1;

    bool is_ascending, is_descending;
    is_ascending = is_descending = true;

    int first = notes[0];
    if (first > 1)
        is_ascending = false;
    else if (first < NOTES_IN_SCLAE)
        is_descending = false;

    int prev = first, i;
    if (is_ascending) {
        for (i = 1; i < NOTES_IN_SCLAE; i++) {
            if (notes[i] <= prev) {
                is_ascending = false;
                break;
            }
            prev = notes[i];
        }
    } else if (is_descending) {
        for (i = 1; i < NOTES_IN_SCLAE; i++) {
            if (notes[i] >= prev) {
                is_descending = false;
                break;
            }
            prev = notes[i];
        }
    }

    if (is_ascending)
        printf("ascending\n");
    else if (is_descending)
        printf("descending\n");
    else
        printf("mixed\n");
    return 0;
}
