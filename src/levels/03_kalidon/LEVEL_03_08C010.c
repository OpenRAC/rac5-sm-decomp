/* LEVEL_03:0x08C010 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_0020E900;
extern int D_0020E904;
extern int D_0020E908;
extern int g_JointMatrixBuffers[];

int func_08C010(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_0020E908 - D_0020E900) < a0) {
        return 0;
    }
    g280 = D_0020E900;
    D_0020E900 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_0020E904] + g280;
}
