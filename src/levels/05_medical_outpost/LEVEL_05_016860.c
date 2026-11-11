/* LEVEL_05:0x016860 -- one of the eight level slots receives a copy of the
   caller's block of sixteen floats. */
typedef struct {
    float f[16];
} Block;

extern Block D_0021B5F0[];

void func_016860(unsigned int slot, Block *src)
{
    if (slot < 8) {
        D_0021B5F0[slot] = *src;
    }
}
