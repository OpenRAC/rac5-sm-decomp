/* LEVEL_09.REL:0x08BA68: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_002417E0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00241850;
extern unsigned int D_00241885;
extern unsigned int D_00241848;
extern unsigned int D_0024184C;
extern unsigned int D_00241884;

void func_08BA68(void)
{
    memset(D_002417E0, 0, 0xf8);
    D_00241850 = 1;
    D_00241885 = 0x12;
    D_00241848 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0024184C = 1;
    D_00241884 = 0;
}
