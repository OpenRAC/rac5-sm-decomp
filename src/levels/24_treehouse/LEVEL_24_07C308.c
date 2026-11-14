/* LEVEL_24:0x07C308 -- placement copy of LEVEL_01_0826F8.c: when func_07C0F8 accepts the source it copies the 12-byte vector to the destination; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_07C0F8(Vec3 *src, int arg);

int func_07C308(Vec3 *src, Vec3 *dst, int arg)
{
    if (func_07C0F8(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
