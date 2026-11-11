/* LEVEL_21:0x070848 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_0014AF00;
extern int D_0014AF04;
extern int D_0014AF08;
extern int g_JointMatrixBuffers[];

int func_070848(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_0014AF08 - D_0014AF00) < a0) {
        return 0;
    }
    g280 = D_0014AF00;
    D_0014AF00 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_0014AF04] + g280;
}
