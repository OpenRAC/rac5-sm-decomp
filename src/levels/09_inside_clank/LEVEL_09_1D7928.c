/* LEVEL_09:0x1D7928 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001F3FF0;

int func_1D7928(int value)
{
    int old = D_001F3FF0;

    D_001F3FF0 = value;
    return old;
}
