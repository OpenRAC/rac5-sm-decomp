/* LEVEL_08:0x094300 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_0023F140;
extern int D_0023F144;
extern int D_0023F148;
extern int g_JointMatrixBuffers[];

int func_094300(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_0023F148 - D_0023F140) < a0) {
        return 0;
    }
    g280 = D_0023F140;
    D_0023F140 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_0023F144] + g280;
}
