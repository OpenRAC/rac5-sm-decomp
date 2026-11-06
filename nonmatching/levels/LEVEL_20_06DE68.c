/* LEVEL_20.REL:0x06DE68: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00163D20[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00163D90;
extern unsigned int D_00163DC5;
extern unsigned int D_00163D88;
extern unsigned int D_00163D8C;
extern unsigned int D_00163DC4;

void func_06DE68(void)
{
    memset(D_00163D20, 0, 0xf8);
    D_00163D90 = 1;
    D_00163DC5 = 0x12;
    D_00163D88 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_00163D8C = 1;
    D_00163DC4 = 0;
}
