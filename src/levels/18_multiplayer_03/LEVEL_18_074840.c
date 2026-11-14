/* LEVEL_18:0x074840 -- placement copy of LEVEL_01_0826F8.c: when func_074630 accepts the source it copies the 12-byte vector to the destination; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_074630(Vec3 *src, int arg);

int func_074840(Vec3 *src, Vec3 *dst, int arg)
{
    if (func_074630(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
