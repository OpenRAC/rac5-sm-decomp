/* LEVEL_08:0x234FA0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00253B24;

int func_234FA0(int value)
{
    int old = D_00253B24;

    D_00253B24 = value;
    return old;
}
