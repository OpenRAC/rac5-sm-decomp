/* LEVEL_05:0x089AD8 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001E5600;
extern int D_001E5604;
extern int D_001E5608;
extern int g_JointMatrixBuffers[];

int func_089AD8(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001E5608 - D_001E5600) < a0) {
        return 0;
    }
    g280 = D_001E5600;
    D_001E5600 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001E5604] + g280;
}
