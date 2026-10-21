/* LEVEL_23:0x026450 -- a 52-byte block copied from a global into one
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

extern Dest *D_001C73AC;
extern Block D_001FE3C0;

void func_026450(int index)
{
    Dest *dest = (Dest *)(index * 52 + (int)D_001C73AC);

    dest->block = D_001FE3C0;
}
