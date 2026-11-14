/* LEVEL_05:0x07FDC8 -- placement copy of LEVEL_01_0826F8.c: when func_07FBB8 accepts the source it copies the 12-byte vector to the destination; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_07FBB8(Vec3 *src, int arg);

int func_07FDC8(Vec3 *src, Vec3 *dst, int arg)
{
    if (func_07FBB8(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
