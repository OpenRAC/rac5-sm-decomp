/* LEVEL_19:0x016A58 -- a sixty four byte block is copied out of the
   spawn table, at the slot the destination pointer points to. */
typedef struct {
    int i[16];
} Blob;

typedef struct {
    char pad[0x44];
    int offset;
} Table;

extern Table *D_001B5A20;
extern int *D_0019BFD4;

void func_016A58(Blob *dst)
{
    int slot = ((int)((char *)dst - D_001B5A20->offset)) >> 7;
    Blob *src = (Blob *)((char *)*D_0019BFD4 + slot * 80);

    *dst = *src;
}
