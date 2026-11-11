/* LEVEL_18:0x0B3708 -- copies the caller's block of floats into the global. */
typedef struct {
    float f[4];
} Block;

extern Block D_00279CD8;

void func_0B3708(Block *src)
{
    D_00279CD8 = *src;
}
