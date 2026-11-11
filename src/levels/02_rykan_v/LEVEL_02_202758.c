/* LEVEL_02:0x202758 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_0021F2C0;

int func_202758(int value)
{
    int old = D_0021F2C0;

    D_0021F2C0 = value;
    return old;
}
