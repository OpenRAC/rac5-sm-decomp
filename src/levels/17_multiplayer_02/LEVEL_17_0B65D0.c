/* LEVEL_17:0x0B65D0 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001A2284;
extern int D_001A228C;
extern void func_111328(int *p, int a1);

void func_0B65D0(int *p)
{
    if (D_001A2284 == 1) {
        func_111328(p, 0x1D);
    } else {
        D_001A228C = 0x12;
        func_111328(p, 0x13);
    }
}
