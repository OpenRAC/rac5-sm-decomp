/* FRONTEND:0x025190 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00105548;

int func_025190(int value)
{
    int old = D_00105548;

    D_00105548 = value;
    return old;
}
