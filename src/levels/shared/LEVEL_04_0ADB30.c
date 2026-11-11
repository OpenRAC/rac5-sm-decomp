/* LEVEL_04:0x0ADB30 -- tests whether a point lies inside an inclusive
   integer rectangle. */
typedef struct {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect;

int func_0ADB30(Rect *rect, int x, int y)
{
    return y >= rect->y0 && y <= rect->y1 && x >= rect->x0 && x <= rect->x1;
}
