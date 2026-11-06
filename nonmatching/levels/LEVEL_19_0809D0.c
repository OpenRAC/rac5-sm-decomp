/* LEVEL_19.REL:0x0809D0: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00210660[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_002106D0;
extern unsigned int D_00210705;
extern unsigned int D_002106C8;
extern unsigned int D_002106CC;
extern unsigned int D_00210704;

void func_0809D0(void)
{
    memset(D_00210660, 0, 0xf8);
    D_002106D0 = 1;
    D_00210705 = 0x12;
    D_002106C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_002106CC = 1;
    D_00210704 = 0;
}
