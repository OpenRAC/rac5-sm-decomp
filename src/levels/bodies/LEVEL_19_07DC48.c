/* LEVEL_19:0x07DC48 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001A5430;
extern int D_001A5434;
extern int D_001A5438;
extern int g_JointMatrixBuffers[];

int func_07DC48(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001A5438 - D_001A5430) < a0) {
        return 0;
    }
    g280 = D_001A5430;
    D_001A5430 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001A5434] + g280;
}
