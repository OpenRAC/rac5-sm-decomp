/* LEVEL_06.REL:0x087F60: USA candidate; Ghidra body 96 bytes.
 * Pinned C links 104 bytes, first difference at +4.
 * Recheck global field widths and stores after the imported clear. No matching credit.
 */
extern char D_00246DE0[];
extern void *memset(void *, int, unsigned int);
extern int g_ALPHASORT_CurrentView;
extern unsigned int D_00246E50;
extern unsigned int D_00246E85;
extern unsigned int D_00246E48;
extern unsigned int D_00246E4C;
extern unsigned int D_00246E84;

void func_087F60(void)
{
    memset(D_00246DE0, 0, 0xf8);
    D_00246E50 = 1;
    D_00246E85 = 0x12;
    D_00246E48 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_00246E4C = 1;
    D_00246E84 = 0;
}
