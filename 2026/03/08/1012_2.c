#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

typedef struct {
    int x, y;
} Point;

char field[MAX_SIZE][MAX_SIZE];

Point queue[MAX_SIZE * MAX_SIZE];
int head, tail;
int width, height;

static void enque(int x, int y) { queue[tail++] = (Point){x, y}; }
static Point deque(void) { return queue[head++]; }
static bool is_empty(void) { return head == tail; }

static void bfs(int x, int y)
{
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    head = tail = 0;
    field[y][x] = 0;
    enque(x, y);

    while (!is_empty()) {
        Point curr = deque();

        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if (nx >= 0 && nx < width && ny >= 0 && ny < height) {
                if (field[ny][nx] == 1) {
                    field[ny][nx] = 0;
                    enque(nx, ny);
                }
            }
        }
    }
}

int main(void)
{
    int test_cases;
    if (scanf("%d", &test_cases) < 0)
        return -1;

    while (test_cases--) {
        int cabbage_count;
        scanf("%d %d %d", &width, &height, &cabbage_count);

        memset(field, 0, sizeof(field));

        for (int i = 0; i < cabbage_count; i++) {
            int y, x;
            scanf("%d %d", &x, &y);
            field[y][x] = 1;
        }

        int worm_count = 0;
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (field[y][x] == 1) {
                    bfs(x, y);
                    worm_count++;
                }
            }
        }

        printf("%d\n", worm_count);
    }
}
