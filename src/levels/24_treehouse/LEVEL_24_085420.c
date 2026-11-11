/* LEVEL_24:0x085420 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001C6F00;
extern int D_001C6F04;
extern int D_001C6F08;
extern int g_JointMatrixBuffers[];

int func_085420(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001C6F08 - D_001C6F00) < a0) {
        return 0;
    }
    g280 = D_001C6F00;
    D_001C6F00 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001C6F04] + g280;
}
