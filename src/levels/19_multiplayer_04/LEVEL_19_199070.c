/* LEVEL_19:0x199070 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001BFC54;

int func_199070(int value)
{
    int old = D_001BFC54;

    D_001BFC54 = value;
    return old;
}
