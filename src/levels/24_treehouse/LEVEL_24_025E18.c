/* LEVEL_24:0x025E18 -- a 52-byte block copied from one element of an
   array into a global; the element pointer is built from a table
   pointer and a 52-byte stride. */
typedef struct {
    float f[12];
    int x;
} Block;

typedef struct {
    char pad00[0xE8];
    Block block;
} Dest;

extern Dest *D_001C4C2C;
extern Block D_001FCE40;

void func_025E18(int index)
{
    Dest *dest = (Dest *)(index * 52 + (int)D_001C4C2C);

    D_001FCE40 = dest->block;
}
