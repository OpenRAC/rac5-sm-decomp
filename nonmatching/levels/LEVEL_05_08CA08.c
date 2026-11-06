/* LEVEL_05.REL:0x08CA08: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00245F20[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00245F90;
extern unsigned int D_00245FC5;
extern unsigned int D_00245F88;
extern unsigned int D_00245F8C;
extern unsigned int D_00245FC4;

void func_08CA08(void)
{
    memset(D_00245F20, 0, 0xf8);
    D_00245F90 = 1;
    D_00245FC5 = 0x12;
    D_00245F88 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_00245F8C = 1;
    D_00245FC4 = 0;
}
