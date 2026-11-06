/* LEVEL_04.REL:0x092408: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00274860[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_002748D0;
extern unsigned int D_00274905;
extern unsigned int D_002748C8;
extern unsigned int D_002748CC;
extern unsigned int D_00274904;

void func_092408(void)
{
    memset(D_00274860, 0, 0xf8);
    D_002748D0 = 1;
    D_00274905 = 0x12;
    D_002748C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_002748CC = 1;
    D_00274904 = 0;
}
