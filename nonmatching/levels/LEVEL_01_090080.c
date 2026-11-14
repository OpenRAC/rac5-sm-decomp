/* USA LEVEL_01.REL:0x090080, 140-byte candidate (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 72.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct DList {
    char pad_00[0x24];
    char *cursor;
} DList;

extern char db_dlist[];
extern unsigned short D_00294D90;
extern char *D_0028A190[];
extern void func_0A1880(char *block, int mode, void *src, int flag);

unsigned int func_090080(void *src)
{
    DList *dl;
    char *block;
    unsigned int index;

    if (D_00294D90 < 0x300) {
        dl = *(DList **)(db_dlist + 0x54);
        block = dl->cursor - 0x70;
        dl->cursor = block;
        func_0A1880(block, 2, src, 1);
        D_0028A190[D_00294D90] = block;
        index = D_00294D90++;
    } else {
        index = 0;
    }
    return index;
}
