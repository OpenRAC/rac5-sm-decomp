/* LEVEL_20:0x0FA5E8 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00120234;

int func_0FA5E8(int value)
{
    int old = D_00120234;

    D_00120234 = value;
    return old;
}
