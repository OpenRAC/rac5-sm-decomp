/* LEVEL_18:0x199348 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001BFFEC;

int func_199348(int value)
{
    int old = D_001BFFEC;

    D_001BFFEC = value;
    return old;
}
