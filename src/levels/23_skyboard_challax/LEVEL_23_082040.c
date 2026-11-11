/* LEVEL_23:0x082040 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001C9680;
extern int D_001C9684;
extern int D_001C9688;
extern int g_JointMatrixBuffers[];

int func_082040(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001C9688 - D_001C9680) < a0) {
        return 0;
    }
    g280 = D_001C9680;
    D_001C9680 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001C9684] + g280;
}
