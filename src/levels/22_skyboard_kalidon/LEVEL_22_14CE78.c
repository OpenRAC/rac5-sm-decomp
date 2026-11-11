/* LEVEL_22:0x14CE78 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00167A30;

int func_14CE78(int value)
{
    int old = D_00167A30;

    D_00167A30 = value;
    return old;
}
