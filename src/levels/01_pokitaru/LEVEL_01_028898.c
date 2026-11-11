/* LEVEL_01:0x028898 -- a 52-byte block copied from a global into one
   element of an array; the element pointer is built from a table
   pointer and a 52-byte stride. */
typedef struct {
    float f[12];
    int x;
} Block;

typedef struct {
    char pad00[0xE8];
    Block block;
} Dest;

extern Dest *D_001F3FAC;
extern Block D_00230F40;

void func_028898(int index)
{
    Dest *dest = (Dest *)(index * 52 + (int)D_001F3FAC);

    dest->block = D_00230F40;
}
