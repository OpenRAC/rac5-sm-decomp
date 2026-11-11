/* LEVEL_09:0x1D6280 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F3C5C;

int func_1D6280(int value)
{
    int old = D_001F3C5C;

    D_001F3C5C = value;
    return old;
}
