/* LEVEL_01:0x1EC418 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00209FDC;

int func_1EC418(int value)
{
    int old = D_00209FDC;

    D_00209FDC = value;
    return old;
}
