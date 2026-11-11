/* LEVEL_07:0x200790 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021ECBC;

int func_200790(int value)
{
    int old = D_0021ECBC;

    D_0021ECBC = value;
    return old;
}
