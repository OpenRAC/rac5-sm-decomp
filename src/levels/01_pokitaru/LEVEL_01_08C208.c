/* LEVEL_01:0x08C208 -- reserves an aligned span from a shared cursor when enough room remains, and returns the buffered word at the current index plus the previous cursor. */

extern int D_001F6280;
extern int D_001F6284;
extern int D_001F6288;
extern int g_JointMatrixBuffers[];

int func_08C208(unsigned int a0)
{
    int g280;

    if ((unsigned int)(D_001F6288 - D_001F6280) < a0) {
        return 0;
    }
    g280 = D_001F6280;
    D_001F6280 = (g280 + a0 + 3) & ~3;
    return g_JointMatrixBuffers[D_001F6284] + g280;
}
