/* LEVEL_07:0x0178D8 -- copy one block of sixteen floats into the global ring. */

typedef struct {
    float f[16];
} Block;

extern Block D_2451F0[];

void func_0178D8(unsigned int index, Block *src)
{
    if (index < 8)
        D_2451F0[index] = *src;
}
