/* LEVEL_10:0x1F5460 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021296C;

int func_1F5460(int value)
{
    int old = D_0021296C;

    D_0021296C = value;
    return old;
}
