/* LEVEL_04:0x0ADAE0 -- clamps a point to the rectangle's bounds. */
typedef struct {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect;

void func_0ADAE0(Rect *rect, int *x, int *y)
{
    *x = *x < rect->x0 ? rect->x0 : *x;
    *x = rect->x1 < *x ? rect->x1 : *x;
    *y = *y < rect->y0 ? rect->y0 : *y;
    *y = rect->y1 < *y ? rect->y1 : *y;
}
