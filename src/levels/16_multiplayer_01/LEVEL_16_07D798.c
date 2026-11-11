/* LEVEL_16:0x07D798 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001A42B0;
extern int D_001A42B4;
extern int D_001A42B8;
extern int g_JointMatrixBuffers[];

int func_07D798(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001A42B8 - D_001A42B0) < a0) {
        return 0;
    }
    g280 = D_001A42B0;
    D_001A42B0 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001A42B4] + g280;
}
