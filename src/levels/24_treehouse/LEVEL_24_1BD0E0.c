/* LEVEL_24:0x1BD0E0 -- placement copy of LEVEL_01_1EC408.c: swaps a global word: stores the new value and returns the old one. */
extern int D_001DA82C;

int func_1BD0E0(int value)
{
    int old = D_001DA82C;

    D_001DA82C = value;
    return old;
}
