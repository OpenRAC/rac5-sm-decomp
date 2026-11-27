/* LEVEL_16:0x171E68 -- placement copy of LEVEL_01_1C6480.c: asks func_074F80 about the source vector and, when it accepts, copies the vector to the destination; returns the answer. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_074F80(V3 *a0, int a1);

int func_171E68(V3 *src, V3 *dst, int arg)
{
    int r = ((int (*)(V3 *a0, int a1))func_074F80)(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r;
}
