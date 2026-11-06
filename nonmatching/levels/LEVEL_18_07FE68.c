/* LEVEL_18.REL:0x07FE68: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00210860[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_002108D0;
extern unsigned int D_00210905;
extern unsigned int D_002108C8;
extern unsigned int D_002108CC;
extern unsigned int D_00210904;

void func_07FE68(void)
{
    memset(D_00210860, 0, 0xf8);
    D_002108D0 = 1;
    D_00210905 = 0x12;
    D_002108C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_002108CC = 1;
    D_00210904 = 0;
}
