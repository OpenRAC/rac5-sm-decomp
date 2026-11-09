/* LEVEL_02:0x092AB0 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_0020B240;
extern int D_0020B244;
extern int D_0020B248;
extern int g_JointMatrixBuffers[];

int func_092AB0(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_0020B248 - D_0020B240) < a0) {
        return 0;
    }
    g280 = D_0020B240;
    D_0020B240 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_0020B244] + g280;
}
