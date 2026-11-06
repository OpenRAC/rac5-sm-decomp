/* LEVEL_10.REL:0x08F680: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00263460[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_002634D0;
extern unsigned int D_00263505;
extern unsigned int D_002634C8;
extern unsigned int D_002634CC;
extern unsigned int D_00263504;

void func_08F680(void)
{
    memset(D_00263460, 0, 0xf8);
    D_002634D0 = 1;
    D_00263505 = 0x12;
    D_002634C8 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_002634CC = 1;
    D_00263504 = 0;
}
