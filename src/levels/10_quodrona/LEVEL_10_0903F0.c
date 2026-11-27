/* LEVEL_10:0x0903F0 -- placement copy of LEVEL_01_090080.c: reserves 0x70 bytes from the display-list buffer, initialises the block and records it in a 768-entry table, returning its index. */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_0029E190;
extern char *D_00293590[];
extern void func_0A2998(char *block, int mode, void *src, int flag);

int func_0903F0(void *src)
{
    DList *dl;
    char *block;
    unsigned short index;

    if (D_0029E190 >= 0x300) {
        return 0;
    }
    dl = *(DList **)(db_dlist + 0x54);
    block = dl->cursor - 0x70;
    dl->cursor = block;
    func_0A2998(block, 2, src, 1);
    D_00293590[D_0029E190] = block;
    index = D_0029E190++;
    return index;
}
