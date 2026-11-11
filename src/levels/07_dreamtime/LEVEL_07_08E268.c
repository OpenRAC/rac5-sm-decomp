/* LEVEL_07:0x08E268 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_0020A580;
extern int D_0020A584;
extern int D_0020A588;
extern int g_JointMatrixBuffers[];

int func_08E268(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_0020A588 - D_0020A580) < a0) {
        return 0;
    }
    g280 = D_0020A580;
    D_0020A580 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_0020A584] + g280;
}
