/* LEVEL_08:0x017A88 -- drops one 64-byte vertex block into the level's
   slot table, when the slot number is inside the table. */
typedef struct {
    float f[16];
} Block;

extern Block D_27EB70[8];

void func_017A88(unsigned int slot, Block *src)
{
    if (slot < 8) {
        D_27EB70[slot] = *src;
    }
}
