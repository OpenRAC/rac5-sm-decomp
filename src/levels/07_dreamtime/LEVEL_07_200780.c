/* LEVEL_07:0x200780 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021E6C4;

int func_200780(int value)
{
    int old = D_0021E6C4;

    D_0021E6C4 = value;
    return old;
}
