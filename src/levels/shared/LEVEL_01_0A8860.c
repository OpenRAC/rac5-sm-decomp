/* LEVEL_01:0x0A8860 -- shrinks a rectangle by (dx, dy) on each side, swapping the two edges of an axis when they cross. */
typedef struct {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect;

void func_0A8860(Rect *r, short dx, short dy)
{
    int a;
    int b;
    int c;
    int d;

    a = r->x0 + dx;
    b = r->x1 - dx;
    r->x0 = a;
    r->x1 = b;
    if (b < a) {
        r->x1 = a;
        r->x0 = b;
    }
    c = r->y0 + dy;
    d = r->y1 - dy;
    r->y0 = c;
    r->y1 = d;
    if (d < c) {
        r->y1 = c;
        r->y0 = d;
    }
}
