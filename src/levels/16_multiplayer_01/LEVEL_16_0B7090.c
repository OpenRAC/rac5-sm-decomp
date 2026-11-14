/* LEVEL_16:0x0B7090 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_001AEC84;
extern int D_001AEC8C;
extern void func_111DB0(int *p, int a1);

void func_0B7090(int *p)
{
    if (D_001AEC84 == 1) {
        func_111DB0(p, 0x1D);
    } else {
        D_001AEC8C = 0x12;
        func_111DB0(p, 0x13);
    }
}
