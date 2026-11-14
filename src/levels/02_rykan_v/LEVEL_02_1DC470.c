/* LEVEL_02:0x1DC470 -- placement copy of LEVEL_01_1C6480.c: asks func_088D68 about the source vector and, when it accepts, copies the vector to the destination; returns the answer. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern int func_088D68(V3 *a0, int a1);

int func_1DC470(V3 *src, V3 *dst, int arg)
{
    int r = func_088D68(src, arg);

    if (r != 0) {
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    return r;
}
