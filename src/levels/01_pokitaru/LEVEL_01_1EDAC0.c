/* LEVEL_01:0x1EDAC0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0020A370;

int func_1EDAC0(int value)
{
    int old = D_0020A370;

    D_0020A370 = value;
    return old;
}
