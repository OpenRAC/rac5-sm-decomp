/* LEVEL_06:0x1B2E20 -- placement copy of LEVEL_01_1C6480.c: asks func_07B5F8 about the source vector and, when it accepts, copies the vector to the destination; returns the answer. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern int func_07B5F8(V3 *a0, int a1);

int func_1B2E20(V3 *src, V3 *dst, int arg)
{
    int r = func_07B5F8(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r;
}
