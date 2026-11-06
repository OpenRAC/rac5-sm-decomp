/* LEVEL_01.REL:0x08F310: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_0025A060[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_0025A0D0;
extern unsigned int D_0025A105;
extern unsigned int D_0025A0C8;
extern unsigned int D_0025A0CC;
extern unsigned int D_0025A104;

void func_08F310(void)
{
    memset(D_0025A060, 0, 0xf8);
    D_0025A0D0 = 1;
    D_0025A105 = 0x12;
    D_0025A0C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0025A0CC = 1;
    D_0025A104 = 0;
}
