/* LEVEL_08.REL:0x097230: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_002A92E0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_002A9350;
extern unsigned int D_002A9385;
extern unsigned int D_002A9348;
extern unsigned int D_002A934C;
extern unsigned int D_002A9384;

void func_097230(void)
{
    memset(D_002A92E0, 0, 0xf8);
    D_002A9350 = 1;
    D_002A9385 = 0x12;
    D_002A9348 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_002A934C = 1;
    D_002A9384 = 0;
}
