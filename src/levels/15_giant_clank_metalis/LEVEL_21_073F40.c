/* LEVEL_21:0x073F40 -- placement copy of LEVEL_01_090080.c: reserves 0x70 bytes from the display-list buffer, initialises the block and records it in a 768-entry table, returning its index. */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_001ACDD0;
extern char *D_001A21D0[];
extern void func_082178(char *block, int mode, void *src, int flag);

int func_073F40(void *src)
{
    DList *dl;
    char *block;
    unsigned short index;

    if (D_001ACDD0 >= 0x300) {
        return 0;
    }
    dl = *(DList **)(db_dlist + 0x54);
    block = dl->cursor - 0x70;
    dl->cursor = block;
    func_082178(block, 2, src, 1);
    D_001A21D0[D_001ACDD0] = block;
    index = D_001ACDD0++;
    return index;
}
