/* LEVEL_17.REL:0x080F60: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_002017E0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00201850;
extern unsigned int D_00201885;
extern unsigned int D_00201848;
extern unsigned int D_0020184C;
extern unsigned int D_00201884;

void func_080F60(void)
{
    memset(D_002017E0, 0, 0xf8);
    D_00201850 = 1;
    D_00201885 = 0x12;
    D_00201848 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0020184C = 1;
    D_00201884 = 0;
}
