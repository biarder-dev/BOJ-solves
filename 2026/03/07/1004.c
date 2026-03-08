#include <stdio.h>

#define MAX_PLANET 50
#define SQ(x) ((x) * (x))

typedef struct coord coord;
typedef struct pcoord pcoord;
struct coord {
    int x, y;
};
struct pcoord {
    coord c;
    int r;
};

int main(void)
{
    coord s, e;
    pcoord pl[MAX_PLANET];
    int sdist_sq, edist_sq, r_sq, result;
    int t, p, i, j;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d %d %d", &s.x, &s.y, &e.x, &e.y);
        scanf("%d", &p);

        result = 0;
        for (j = 0; j < p; j++) {
            scanf("%d %d %d", &(pl[j].c.x), &(pl[j].c.y), &(pl[j].r));
        }

        for (j = 0; j < p; j++) {
            sdist_sq = SQ(s.x - pl[j].c.x) + SQ(s.y - pl[j].c.y);
            edist_sq = SQ(e.x - pl[j].c.x) + SQ(e.y - pl[j].c.y);
            r_sq = SQ(pl[j].r);

            if ((sdist_sq < r_sq) ^ (edist_sq < r_sq))
                result++;
        }

        printf("%d\n", result);
    }

    return 0;
}
