/* LEVEL_15:0x0F7140 -- returns table entry plus an offset for a nonnegative index, or -1. */
typedef struct { unsigned char pad[0x415C]; unsigned short *tbl; unsigned char rest[0x40000 - 0x415C - 4]; } Chunk;
extern Chunk D_002A8B58[];

int func_0F7140(int index, int extra)
{
    if (index < 0) return -1;
    return D_002A8B58[1].tbl[index] + extra;
}
