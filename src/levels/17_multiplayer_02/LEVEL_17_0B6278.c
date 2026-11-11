/* LEVEL_17:0x0B6278 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001A2284;
extern unsigned char D_001A2228;
extern int D_001A228C;
extern void func_111328(int *p, int a1);

void func_0B6278(int *o)
{
    if (D_001A2284 == 1) {
        func_111328(o, 8);
    } else if (D_001A2228 != 0) {
        D_001A228C = 0x1D;
        func_111328(o, 0x13);
    } else {
        func_111328(o, 0x1E);
    }
}
