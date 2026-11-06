/* LEVEL_22.REL:0x0800E0: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_001AFC20[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_001AFC90;
extern unsigned int D_001AFCC5;
extern unsigned int D_001AFC88;
extern unsigned int D_001AFC8C;
extern unsigned int D_001AFCC4;

void func_0800E0(void)
{
    memset(D_001AFC20, 0, 0xf8);
    D_001AFC90 = 1;
    D_001AFCC5 = 0x12;
    D_001AFC88 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_001AFC8C = 1;
    D_001AFCC4 = 0;
}
