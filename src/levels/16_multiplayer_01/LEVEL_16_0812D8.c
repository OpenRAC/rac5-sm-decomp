/* LEVEL_16:0x0812D8 -- placement copy of LEVEL_01_090080.c: reserves 0x70 bytes from the display-list buffer, initialises the block and records it in a 768-entry table, returning its index. */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_0024B210;
extern char *D_00240610[];
extern void func_090AE0(char *block, int mode, void *src, int flag);

int func_0812D8(void *src)
{
    DList *dl;
    char *block;
    unsigned short index;

    if (D_0024B210 >= 0x300) {
        return 0;
    }
    dl = *(DList **)(db_dlist + 0x54);
    block = dl->cursor - 0x70;
    dl->cursor = block;
    func_090AE0(block, 2, src, 1);
    D_00240610[D_0024B210] = block;
    index = D_0024B210++;
    return index;
}
