/* LEVEL_22:0x07D598 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_00155600;
extern int D_00155604;
extern int D_00155608;
extern int g_JointMatrixBuffers[];

int func_07D598(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_00155608 - D_00155600) < a0) {
        return 0;
    }
    g280 = D_00155600;
    D_00155600 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_00155604] + g280;
}
