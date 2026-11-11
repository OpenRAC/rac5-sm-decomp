/* LEVEL_20:0x06B3D0 -- placement copy of LEVEL_01_08C208.c: reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_00106990;
extern int D_00106994;
extern int D_00106998;
extern int g_JointMatrixBuffers[];

int func_06B3D0(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_00106998 - D_00106990) < a0) {
        return 0;
    }
    g280 = D_00106990;
    D_00106990 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_00106994] + g280;
}
