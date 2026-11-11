/* LEVEL_20:0x0FA5D8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0011FC3C;

int func_0FA5D8(int value)
{
    int old = D_0011FC3C;

    D_0011FC3C = value;
    return old;
}
