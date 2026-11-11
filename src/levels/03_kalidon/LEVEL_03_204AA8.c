/* LEVEL_03:0x204AA8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00222EB4;

int func_204AA8(int value)
{
    int old = D_00222EB4;

    D_00222EB4 = value;
    return old;
}
