/* LEVEL_03:0x0824D8 -- placement copy of LEVEL_01_0826F8.c: when func_0822C8 accepts the source it copies the 12-byte vector to the destination; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_0822C8(Vec3 *src, int arg);

int func_0824D8(Vec3 *src, Vec3 *dst, int arg)
{
    if (func_0822C8(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
