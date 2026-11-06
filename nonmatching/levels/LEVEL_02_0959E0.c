/* LEVEL_02.REL:0x0959E0: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00271560[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_002715D0;
extern unsigned int D_00271605;
extern unsigned int D_002715C8;
extern unsigned int D_002715CC;
extern unsigned int D_00271604;

void func_0959E0(void)
{
    memset(D_00271560, 0, 0xf8);
    D_002715D0 = 1;
    D_00271605 = 0x12;
    D_002715C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_002715CC = 1;
    D_00271604 = 0;
}
