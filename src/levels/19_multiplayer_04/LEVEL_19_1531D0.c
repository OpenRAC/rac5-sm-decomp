/* LEVEL_19:0x1531D0 -- placement copy of LEVEL_16_158E30.c: asks func_075140 about the source vector and, when it accepts, copies the vector to the destination; reports whether it accepted. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern int func_075140(V3 *a0, int a1);

int func_1531D0(V3 *src, V3 *dst, int arg)
{
    int r = func_075140(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r != 0;
}
