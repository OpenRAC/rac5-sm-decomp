/* LEVEL_03:0x204A98 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_002228BC;

int func_204A98(int value)
{
    int old = D_002228BC;

    D_002228BC = value;
    return old;
}
