/* LEVEL_21:0x141100 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0015E3D4;

int func_141100(int value)
{
    int old = D_0015E3D4;

    D_0015E3D4 = value;
    return old;
}
