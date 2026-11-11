/* LEVEL_09:0x1D6270 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F3664;

int func_1D6270(int value)
{
    int old = D_001F3664;

    D_001F3664 = value;
    return old;
}
