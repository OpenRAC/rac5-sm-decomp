/* LEVEL_02:0x2010A0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021E934;

int func_2010A0(int value)
{
    int old = D_0021E934;

    D_0021E934 = value;
    return old;
}
