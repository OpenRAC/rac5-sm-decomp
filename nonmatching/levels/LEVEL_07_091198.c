/* LEVEL_07.REL:0x091198: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_0026F960[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_0026F9D0;
extern unsigned int D_0026FA05;
extern unsigned int D_0026F9C8;
extern unsigned int D_0026F9CC;
extern unsigned int D_0026FA04;

void func_091198(void)
{
    memset(D_0026F960, 0, 0xf8);
    D_0026F9D0 = 1;
    D_0026FA05 = 0x12;
    D_0026F9C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0026F9CC = 1;
    D_0026FA04 = 0;
}
