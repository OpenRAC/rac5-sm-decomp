/* LEVEL_24:0x088E80 -- placement copy of LEVEL_01_090080.c: reserves 0x70 bytes from the display-list buffer, initialises the block and records it in a 768-entry table, returning its index. */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_00260C50;
extern char *D_00256050[];
extern void func_09B0F8(char *block, int mode, void *src, int flag);

int func_088E80(void *src)
{
    DList *dl;
    char *block;
    unsigned short index;

    if (D_00260C50 >= 0x300) {
        return 0;
    }
    dl = *(DList **)(db_dlist + 0x54);
    block = dl->cursor - 0x70;
    dl->cursor = block;
    func_09B0F8(block, 2, src, 1);
    D_00256050[D_00260C50] = block;
    index = D_00260C50++;
    return index;
}
