/* LEVEL_07:0x19FB90 -- placement copy of LEVEL_01_1C6480.c: asks func_084680 about the source vector and, when it accepts, copies the vector to the destination; returns the answer. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_084680(V3 *a0, int a1);

int func_19FB90(V3 *src, V3 *dst, int arg)
{
    int r = ((int (*)(V3 *a0, int a1))func_084680)(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r;
}
