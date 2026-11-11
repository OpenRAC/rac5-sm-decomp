/* LEVEL_06:0x026CD0 -- placement copy of LEVEL_01_028898.c: a 52-byte block copied from a global into one
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

extern Dest *D_001E2EAC;
extern Block D_0021DCC0;

void func_026CD0(int index)
{
    Dest *dest = (Dest *)(index * 52 + (int)D_001E2EAC);

    dest->block = D_0021DCC0;
}
