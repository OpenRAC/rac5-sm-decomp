/* LEVEL_01:0x015990 -- reports whether the squared distance between the first and the last point of a path (at least three points) is within the given limit. */
typedef struct V4 {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct Path {
    char pad_00[4];
    V4 *pts;
    char pad_08[0x0C];
    unsigned short count;
} Path;

int func_015990(Path *p, float limit)
{
    V4 *first;
    V4 *last;
    float dx;
    float dy;
    float dz;
    int n;

    n = p->count;
    if (n < 3) {
        return 0;
    }
    first = p->pts;
    last = first + (n - 1);
    dx = last->x - first->x;
    dy = last->y - first->y;
    dz = last->z - first->z;
    return dx * dx + dy * dy + dz * dz <= limit;
}
