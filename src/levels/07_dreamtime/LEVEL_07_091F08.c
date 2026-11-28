/* LEVEL_07:0x091F08 -- placement copy of LEVEL_01_090080.c: reserves 0x70 bytes from the display-list buffer, initialises the block and records it in a 768-entry table, returning its index. */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_002AA690;
extern char *D_0029FA90[];
extern void func_0A3880(char *block, int mode, void *src, int flag);

int func_091F08(void *src)
{
    DList *dl;
    char *block;
    unsigned short index;

    if (D_002AA690 >= 0x300) {
        return 0;
    }
    dl = *(DList **)(db_dlist + 0x54);
    block = dl->cursor - 0x70;
    dl->cursor = block;
    func_0A3880(block, 2, src, 1);
    D_0029FA90[D_002AA690] = block;
    index = D_002AA690++;
    return index;
}
