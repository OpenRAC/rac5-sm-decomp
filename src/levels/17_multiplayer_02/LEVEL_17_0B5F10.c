/* LEVEL_17:0x0B5F10 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001A2284;
extern unsigned char D_001A2228;
extern int D_001A228C;
extern void func_111328(int *p, int a1);

void func_0B5F10(int *p)
{
    if (D_001A2284 == 1) {
        func_111328(p, 10);
    } else if (D_001A2228 != 0) {
        D_001A228C = 0x1D;
        func_111328(p, 0x13);
    } else {
        func_111328(p, 0x1E);
    }
}
