/* LEVEL_18:0x1552D8 -- placement copy of LEVEL_16_158E30.c: asks func_074630 about the source vector and, when it accepts, copies the vector to the destination; reports whether it accepted. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern int func_074630(V3 *a0, int a1);

int func_1552D8(V3 *src, V3 *dst, int arg)
{
    int r = func_074630(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r != 0;
}
