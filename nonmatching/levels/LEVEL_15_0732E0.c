/* LEVEL_15.REL:0x0732E0: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_001A20A0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_001A2110;
extern unsigned int D_001A2145;
extern unsigned int D_001A2108;
extern unsigned int D_001A210C;
extern unsigned int D_001A2144;

void func_0732E0(void)
{
    memset(D_001A20A0, 0, 0xf8);
    D_001A2110 = 1;
    D_001A2145 = 0x12;
    D_001A2108 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_001A210C = 1;
    D_001A2144 = 0;
}
