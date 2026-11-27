/* LEVEL_17:0x075938 -- placement copy of LEVEL_01_0826F8.c: when func_075728 accepts the source it copies the 12-byte vector to the destination; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_075728(Vec3 *src, int arg);

int func_075938(Vec3 *src, Vec3 *dst, int arg)
{
    if (((int (*)(Vec3 *src, int arg))func_075728)(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
