/* LEVEL_02:0x2010B0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021EF2C;

int func_2010B0(int value)
{
    int old = D_0021EF2C;

    D_0021EF2C = value;
    return old;
}
