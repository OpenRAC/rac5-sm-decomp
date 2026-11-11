/* LEVEL_01:0x0171C8 -- drops one 64-byte vertex block into the level's
   slot table, when the slot number is inside the table. */
typedef struct {
    float f[16];
} Block;

extern Block D_22F8F0[8];

void func_0171C8(unsigned int slot, Block *src)
{
    if (slot < 8) {
        D_22F8F0[slot] = *src;
    }
}
