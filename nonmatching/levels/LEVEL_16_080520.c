/* LEVEL_16.REL:0x080520: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_002104E0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00210550;
extern unsigned int D_00210585;
extern unsigned int D_00210548;
extern unsigned int D_0021054C;
extern unsigned int D_00210584;

void func_080520(void)
{
    memset(D_002104E0, 0, 0xf8);
    D_00210550 = 1;
    D_00210585 = 0x12;
    D_00210548 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0021054C = 1;
    D_00210584 = 0;
}
