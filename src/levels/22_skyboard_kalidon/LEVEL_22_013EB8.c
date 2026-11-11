/* LEVEL_22.REL 0x013EB8 -- copies one 64-byte block of floats into the
   level's slot table, if the slot index is in range. */
typedef struct {
    float f[16];
} Block;

extern Block D_1814F0[8];

void func(int index, Block *src)
{
    if ((unsigned int)index < 8)
        D_1814F0[index] = *src;
}
