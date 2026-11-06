/* LEVEL_03.REL:0x08EF40: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00274EE0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00274F50;
extern unsigned int D_00274F85;
extern unsigned int D_00274F48;
extern unsigned int D_00274F4C;
extern unsigned int D_00274F84;

void func_08EF40(void)
{
    memset(D_00274EE0, 0, 0xf8);
    D_00274F50 = 1;
    D_00274F85 = 0x12;
    D_00274F48 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_00274F4C = 1;
    D_00274F84 = 0;
}
