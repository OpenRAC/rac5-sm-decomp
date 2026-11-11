/* LEVEL_04:0x08F4D8 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_0020F740;
extern int D_0020F744;
extern int D_0020F748;
extern int g_JointMatrixBuffers[];

int func_08F4D8(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_0020F748 - D_0020F740) < a0) {
        return 0;
    }
    g280 = D_0020F740;
    D_0020F740 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_0020F744] + g280;
}
