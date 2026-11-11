/* LEVEL_08:0x236648 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00253EB8;

int func_236648(int value)
{
    int old = D_00253EB8;

    D_00253EB8 = value;
    return old;
}
