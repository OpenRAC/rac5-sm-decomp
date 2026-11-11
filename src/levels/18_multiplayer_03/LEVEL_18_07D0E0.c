/* LEVEL_18:0x07D0E0 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001A5730;
extern int D_001A5734;
extern int D_001A5738;
extern int g_JointMatrixBuffers[];

int func_07D0E0(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001A5738 - D_001A5730) < a0) {
        return 0;
    }
    g280 = D_001A5730;
    D_001A5730 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001A5734] + g280;
}
