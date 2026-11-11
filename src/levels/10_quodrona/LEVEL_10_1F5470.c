/* LEVEL_10:0x1F5470 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_00212F64;

int func_1F5470(int value)
{
    int old = D_00212F64;

    D_00212F64 = value;
    return old;
}
