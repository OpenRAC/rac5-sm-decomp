/* LEVEL_22:0x14B7D0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0016769C;

int func_14B7D0(int value)
{
    int old = D_0016769C;

    D_0016769C = value;
    return old;
}
