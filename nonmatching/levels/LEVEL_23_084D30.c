/* LEVEL_23.REL:0x084D30: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_0022B4A0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_0022B510;
extern unsigned int D_0022B545;
extern unsigned int D_0022B508;
extern unsigned int D_0022B50C;
extern unsigned int D_0022B544;

void func_084D30(void)
{
    memset(D_0022B4A0, 0, 0xf8);
    D_0022B510 = 1;
    D_0022B545 = 0x12;
    D_0022B508 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0022B50C = 1;
    D_0022B544 = 0;
}
