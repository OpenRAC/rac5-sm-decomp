/* LEVEL_22:0x14B7C0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001670A4;

int func_14B7C0(int value)
{
    int old = D_001670A4;

    D_001670A4 = value;
    return old;
}
