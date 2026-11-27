/* LEVEL_01:0x090080 -- reserves 0x70 bytes from the display-list buffer, initialises the block and records it in a 768-entry table, returning its index. */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_00294D90;
extern char *D_0028A190[];
extern void func_0A1880(char *block, int mode, void *src, int flag);

int func_090080(void *src)
{
    DList *dl;
    char *block;
    unsigned short index;

    if (D_00294D90 >= 0x300) {
        return 0;
    }
    dl = *(DList **)(db_dlist + 0x54);
    block = dl->cursor - 0x70;
    dl->cursor = block;
    func_0A1880(block, 2, src, 1);
    D_0028A190[D_00294D90] = block;
    index = D_00294D90++;
    return index;
}
