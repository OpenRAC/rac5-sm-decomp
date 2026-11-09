/* LEVEL_09:0x088B38 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001E0080;
extern int D_001E0084;
extern int D_001E0088;
extern int g_JointMatrixBuffers[];

int func_088B38(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001E0088 - D_001E0080) < a0) {
        return 0;
    }
    g280 = D_001E0080;
    D_001E0080 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001E0084] + g280;
}
