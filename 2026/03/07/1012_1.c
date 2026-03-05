#include <stdio.h>

#define F_MAXSIZE 50
#define SQ(x) ((x) * (x))

int fs[F_MAXSIZE][F_MAXSIZE];
int result;

/* Two-Deimensional */
typedef struct td td;
typedef struct td td_len;
struct td {
    int x;
    int y;
};

static void init_fs(void)
{
    int i, j;
    for (i = 0; i < F_MAXSIZE; i++)
        for (j = 0; j < F_MAXSIZE; j++)
            fs[i][j] = 0;
}

static void set_td(td *c, int x, int y)
{
    c->x = x;
    c->y = y;
}

static void inc_td(td *c)
{
    c->x++;
    if (c->x >= F_MAXSIZE) {
        c->x = 0;
        c->y++;
    }
}

static void mark_nearby(td *c, int inc)
{
    td tmp[4];
    int i;

    if (fs[c->x][c->y] == 1) {
        fs[c->x][c->y] = -1;
        if (inc)
            result++;
    } else {
        return;
    }

    if (c->x == 0 && c->y == 0) {
        set_td(tmp, c->x + 1, c->y);
        set_td(tmp + 1, c->x, c->y + 1);

        for (i = 0; i < 2; i++) {
            mark_nearby(tmp + i, 0);
        }
    } else if (c->x == 0 && c->y > 0) {
        set_td(tmp, c->x + 1, c->y);
        set_td(tmp + 1, c->x, c->y + 1);
        set_td(tmp + 2, c->x, c->y - 1);

        for (i = 0; i < 3; i++) {
            mark_nearby(tmp + i, 0);
        }
    } else if (c->x != 0 && c->y == 0) {
        set_td(tmp, c->x + 1, c->y);
        set_td(tmp + 1, c->x - 1, c->y);
        set_td(tmp + 2, c->x, c->y + 1);

        for (i = 0; i < 3; i++) {
            mark_nearby(tmp + i, 0);
        }
    } else {
        set_td(tmp, c->x + 1, c->y);
        set_td(tmp + 1, c->x - 1, c->y);
        set_td(tmp + 2, c->x, c->y + 1);
        set_td(tmp + 3, c->x, c->y - 1);

        for (i = 0; i < 4; i++) {
            mark_nearby(tmp + i, 0);
        }
    }
}

static int check()
{
    td c;
    int i;

    set_td(&c, 0, 0);
    for (i = 0; i < SQ(F_MAXSIZE); i++) {
        mark_nearby(&c, 1);
        inc_td(&c);
    }

    return 1;
}

int main(void)
{
    td c;
    td_len f;
    int fc, t, i;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &f.x, &f.y, &fc);

        init_fs();
        result = 0;

        for (i = 0; i < fc; i++) {
            scanf("%d %d", &c.x, &c.y);
            fs[c.x][c.y] = 1;
        }

        check();
        printf("%d\n", result);
    }
}
