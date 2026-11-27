/* LEVEL_01:0x1C6480 -- asks func_0824E8 about the source vector and, when it accepts, copies the vector to the destination; returns the answer. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_0824E8(V3 *a0, int a1);

int func_1C6480(V3 *src, V3 *dst, int arg)
{
    int r = ((int (*)(V3 *a0, int a1))func_0824E8)(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r;
}
