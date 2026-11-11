/* LEVEL_04:0x2055D8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_002238F4;

int func_2055D8(int value)
{
    int old = D_002238F4;

    D_002238F4 = value;
    return old;
}
