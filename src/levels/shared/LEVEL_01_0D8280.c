/* LEVEL_01:0x0D8280 -- the first vector always lands in the block; the
   second one comes from the optional argument when there is one. */
typedef struct {
    float f[4];
} Vec16;

typedef struct {
    char pad000[0x2C];
    Vec16 a;
    Vec16 b;
} Block;

void func_0D8280(Block *dst, Vec16 *x, Vec16 *y)
{
    dst->a = *x;
    if (!y)
        dst->b = *x;
    else
        dst->b = *y;
}
