/* LEVEL_09:0x07F178 -- placement copy of LEVEL_01_0826F8.c: when func_07EF68 accepts the source it copies the 12-byte vector to the destination; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_07EF68(Vec3 *src, int arg);

int func_07F178(Vec3 *src, Vec3 *dst, int arg)
{
    if (func_07EF68(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
