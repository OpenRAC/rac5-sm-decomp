/* LEVEL_10:0x08C5E0 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001FF280;
extern int D_001FF284;
extern int D_001FF288;
extern int g_JointMatrixBuffers[];

int func_08C5E0(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001FF288 - D_001FF280) < a0) {
        return 0;
    }
    g280 = D_001FF280;
    D_001FF280 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001FF284] + g280;
}
